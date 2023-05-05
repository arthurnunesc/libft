/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 14:50:37 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/05 15:53:26 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dest, char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	j = 0;
	dstlen = 0;
	srclen = 0;
	while (dest[dstlen])
		dstlen++;
	while (src[srclen])
		srclen++;
	if (dstsize <= dstlen || dstsize == 0)
		return (srclen + dstsize);
	i = dstlen;
	while (src[j] && j < (dstsize - dstlen - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (srclen + dstlen);
}
