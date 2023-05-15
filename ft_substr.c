/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:34:47 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/15 19:30:15 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;
	size_t	malloc_size;

	substr = 0;
	i = 0;
	s_len = ft_strlen(s);
	malloc_size = len + 1;
	if (malloc_size > s_len - start + 1)
		malloc_size = s_len - start + 1;
	if (start >= s_len)
		malloc_size = 1;
	substr = (char *)ft_calloc(malloc_size, sizeof(char));
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
