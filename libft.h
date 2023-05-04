/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:50:30 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/04 12:06:58 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
int	ft_bzero(int c);
int	ft_memcpy(int c);
int	ft_memmove(int c);
int	ft_strlcpy(int c);
int	ft_strlcat(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
int	ft_strchr(int c);
int	ft_strrchr(int c);
int	ft_strncmp(int c);
int	ft_memchr(int c);
int	ft_memcmp(int c);
int	ft_strnstr(int c);
int	ft_atoi(int c);
int	ft_calloc(int c);
int	ft_strdup(int c);

#endif
