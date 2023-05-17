/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:47:01 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/17 20:23:12 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static char	**ft_clean(char **char_ptr_ptr, unsigned int failed_index)
{
	unsigned int	i;

	i = 0;
	while (i < failed_index)
	{
		free(char_ptr_ptr[i]);
		i++;
	}
	free(char_ptr_ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char			**list_of_words;
	char			*trimmed_s;
	unsigned int	i;
	unsigned int	j;
	unsigned int	word_count;
	unsigned int	list_index;

	i = 0;
	j = 0;
	word_count = 1;
	list_index = 0;
	trimmed_s = ft_strtrim(s, &c);
	while (trimmed_s[i])
	{
		while (trimmed_s[i] == c)
		{
			if (trimmed_s[i + 1] != c)
				word_count++;
			i++;
		}
		i++;
	}
	i = 0;
	list_of_words = (char **)ft_calloc(word_count + 1, sizeof(char *));
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
	free(trimmed_s);
	return (list_of_words);
}
