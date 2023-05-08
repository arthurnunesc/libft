/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:35:30 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/08 15:21:38 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	uc;
	int				i;
	char			*result;

	i = 0;
	result = 0;
	uc = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == uc)
			result = (char *)&s[i];
		s++;
	}
	if (s[i] == uc)
		result = (char *)&s[i];
	return (result);
}
