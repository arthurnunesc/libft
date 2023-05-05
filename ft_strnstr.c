/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:48:51 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/05 18:44:04 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*big_big;

	i = 0;
	j = 0;
	big_big = (char *)big;
	if (little[0] == '\0' || len == 0)
		return (big_big);
	while (big[i])
	{
		if (big[i] == little[j])
		{
			while (little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return (&big_big[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}
