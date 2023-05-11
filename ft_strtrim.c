/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:43:26 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/11 22:59:04 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int	ft_findfirstcharnotinset(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	found;

	i = 0;
	j = 0;
	found = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (ft_strchr(s1 + i, set[j]))
				found = 1;
			j++;
		}
		i++;
		if (found == 0)
			break ;
		found = 0;
		j = 0;
	}
	return (i);
}

int	ft_findlastcharnotinset(char const *s1, char const *set)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	found;
	unsigned int	s1_len;

	j = 0;
	found = 0;
	s1_len = ft_strlen(s1);
	i = s1_len - 1;
	while (s1[i])
	{
		while (set[j])
		{
			if (ft_strrchr(s1 + i, set[j]) != NULL)
				found = 1;
			j++;
		}
		i--;
		if (found == 0)
			break ;
		found = 0;
		j = 0;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*trimmed;
	unsigned int	start;
	// unsigned int	len;
	trimmed = 0;
	start = ft_findfirstcharnotinset(s1, set);
	// len = start - ft_findlastcharnotinset(s1, set);
	// trimmed = ft_substr(s1, start, len);
	printf("%d\n", start);
	// printf("%d\n", len);
	return (trimmed);
}
