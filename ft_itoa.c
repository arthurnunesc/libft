/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 18:41:32 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/15 18:52:00 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*dst;
	int		size;
	int		size_aux;

	size_aux = n;
	size = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	if (n < 0)
		size++;
	while (++size && (size_aux > 9 || size_aux < -9))
		size_aux = size_aux / 10 ;
	dst = (char *)ft_calloc((size + 1), sizeof(char));
	if (dst == NULL)
		return (0);
	if (n < 0)
	{
		n = -n;
		dst[0] = '-';
	}
	while (--size >= 0 && dst[size] == 0)
	{
		dst[size] = n % 10 + '0';
		n = n / 10;
	}
	return (dst);
}
