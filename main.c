/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:38:36 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/03 14:46:56 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	integer1;
	int	integer2;

	integer1 = 45;
	integer2 = 105;
	printf("isalpha(%d): %d\n", integer1, isalpha(integer1));
	printf("ft_isalpha(%d): %d\n", integer1, ft_isalpha(integer1));
	printf("isalpha(%d): %d\n", integer2, isalpha(integer2));
	printf("ft_isalpha(%d): %d\n", integer2, ft_isalpha(integer2));
	printf("isdigit(%d): %d\n", integer1, isdigit(integer1));
	printf("ft_isdigit(%d): %d\n", integer1, ft_isdigit(integer1));
	printf("isdigit(%d): %d\n", integer2, isdigit(integer2));
	printf("ft_isdigit(%d): %d\n", integer2, ft_isdigit(integer2));
	printf("isalnum(%d): %d\n", integer1, isalnum(integer1));
	printf("ft_isalnum(%d): %d\n", integer1, ft_isalnum(integer1));
	printf("isalnum(%d): %d\n", integer2, isalnum(integer2));
	printf("ft_isalnum(%d): %d\n", integer2, ft_isalnum(integer2));
}
