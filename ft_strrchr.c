/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:35:30 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/08 14:15:18 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	size_t			i;
	char			*result;

	i = 0;
	uc = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == uc)
			result = (char *)&s[i];
		i++;
	}
	if (s[i] == uc)
		result = (char *)&s[i];
	return (result);
}
