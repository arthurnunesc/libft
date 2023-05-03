/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:41:25 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/03 18:32:02 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*uc;

	uc = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		uc[i] = c;
		i++;
	}
	return ((void *)uc);
}
