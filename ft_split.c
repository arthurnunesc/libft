/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:47:01 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/18 20:29:07 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	unsigned int	list_index;

	i = 0;
	j = 1;
	list_index = 0;
	trimmed_s = ft_strtrim(s, &c);
	while (trimmed_s[i])
	{
		while (trimmed_s[i] == c)
		{
			if (trimmed_s[i + 1] != c)
				j++;
			i++;
		}
		i++;
	}
// if (ft_strchr(s, c) == NULL)
//		j = 0;
	list_of_words = (char **)ft_calloc(j + 1, sizeof(char *));
	if (list_of_words == NULL)
		return (NULL);
	i = 0;
	j = 0;
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
}
