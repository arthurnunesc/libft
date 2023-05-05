/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:30:15 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/05 15:54:57 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (i == len)
		i--;
	return (s1[i] - s2[i]);
}
