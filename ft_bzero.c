/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:49:11 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/04 15:31:59 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *b, size_t len)
{
	size_t			i;
	unsigned char	*uchar_ptr;

	i = 0;
	uchar_ptr = (unsigned char *)b;
	while (i < len)
	{
		uchar_ptr[i] = 0;
		i++;
	}
}
