/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:34:47 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/09 15:28:26 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	substr = 0;
	i = 0;
	s_len = ft_strlen(s);
	if (start >= s_len || len > s_len)
		return (0);
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (substr == NULL)
		return (0);
	while (i < len && start + i < s_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
