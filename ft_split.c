/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:47:01 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/19 00:21:07 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	*ft_clean(char **char_ptr_ptr, size_t failed_index)
{
	while (failed_index > 0)
		free(char_ptr_ptr[--failed_index]);
	free(char_ptr_ptr);
	return (NULL);
}

static size_t	ft_countwords(char const *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*ft_extractword(char const *s, char c, size_t *start)
{
	size_t	end;
	char	*word;

	while (s[*start] == c)
		(*start)++;
	end = *start;
	while (s[end] && s[end] != c)
		end++;
	word = ft_substr(s, *start, end - *start);
	*start = end;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	word_count;
	size_t	i;
	size_t	start;

	if (s == NULL)
		return (NULL);
	i = 0;
	start = 0;
	word_count = ft_countwords(s, c);
	split = (char **)ft_calloc((word_count + 1), sizeof(char *));
	if (split == NULL)
		return (NULL);
	while (i < word_count)
	{
		split[i] = ft_extractword(s, c, &start);
		if (split[i] == NULL)
			return (ft_clean(split, i));
		i++;
	}
	split[i] = NULL;
	return (split);
}

/*#include <stdlib.h>
#include "libft.h"

static char	**ft_clean(char **char_ptr_ptr, unsigned int failed_index)
{
	unsigned int	i;

	i = 0;
	while (i <= failed_index)
	{
		if (char_ptr_ptr[i] != NULL)
			free(char_ptr_ptr[i]);
		i++;
	}
	free(char_ptr_ptr);
	return (NULL);
}

static unsigned int	ft_countwords(const char *trimmed_string, char c)
{
	unsigned int	i;
	unsigned int	word_count;
	
	i = 0;
	word_count = 1;
	while (trimmed_string[i])
	{
		while (trimmed_string[i] == c)
		{
			if (trimmed_string[i + 1] != c)
				word_count++;
			i++;
		}
		i++;
	}
	if (trimmed_string[0] == '\0')
		word_count = 0;
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char			**list_of_words;
	char			*trimmed_s;
	unsigned int	i;
	unsigned int	j;
	unsigned int	list_index;

	if (s == NULL || *s == '\0')
		return NULL;
	i = 0;
	j = 0;
	list_index = 0;
	trimmed_s = ft_strtrim(s, &c);
	list_of_words = (char **)ft_calloc(ft_countwords(trimmed_s, c) + 1, sizeof(char *));
	if (list_of_words == NULL)
		return (NULL);
	while (i < ft_strlen(trimmed_s))
	{
		j = i;
		while (trimmed_s[j] && trimmed_s[j] != c)
			j++;
		if ((trimmed_s[j] == c || !trimmed_s[j]) && trimmed_s[j - 1] != c)
		{
			list_of_words[list_index] = ft_substr(trimmed_s, i, j - i);
			if (list_of_words[list_index] == NULL)
				return (ft_clean(list_of_words, list_index));
			list_index++;
			i = j;
		}
		i++;
	}
	list_of_words[list_index] = NULL;
	free(trimmed_s);
	return (list_of_words);
}*/
