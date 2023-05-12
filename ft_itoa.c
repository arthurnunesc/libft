/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:21:58 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/12 16:30:40 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char			*dst;
	unsigned int	size;
	unsigned int	size_aux;
	unsigned int	i;

	size = 0;
	if (n < 0)
		size_aux = -n;
	else
		size_aux = n;
	while (size_aux > 9)
	{
		size_aux = size_aux / 10;
		size++;
	}
	size++;
	if (n < 0)
	{
		size++;
		dst = (char *)malloc(size * sizeof(char));
		dst[0] = '-';
		n = -n;
	}
	else
		dst = (char *)malloc(size * sizeof(char));
	i = size - 1;
	while (i > 0)
	{
		dst[i] = (char)((n % 10) + 48);
		n = n / 10;
		i--;
	}
	if (dst[i] == '-')
		return (dst);
	else if (n == 0)
		dst[i] = '0';
	else
		dst[i] = (char)((n % 10) + 48);
	return (dst);
}
