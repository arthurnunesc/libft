/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 13:48:51 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/05 16:00:26 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i])
	{
		if (big[i] == little[j])
		{
			while (little[j] && big[i + j] == little[j])
				j++;
			if (little[j] == '\0')
				return (&(char *)big[i]);
			j = 0;
		}
		i++;
	}
	return (0);
}
