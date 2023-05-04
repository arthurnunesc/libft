/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 17:41:25 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/04 17:41:30 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *dest, int c, size_t len)
{
	size_t			i;
	unsigned char	*uc_ptr;
	unsigned char	uc;

	uc_ptr = (unsigned char *)dest;
	uc = (unsigned char)c;
	i = 0;
	while (i < len)
	{
		uc_ptr[i] = uc;
		i++;
	}
	return ((void *)uc_ptr);
}
