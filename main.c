/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:38:36 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/03 15:09:08 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include <ctype.h>
#include "libft.h"

int	main(void)
{
	int	var_alpha;
	int	var_digit;
	int	var_ascii;
	int	var_negative;

	var_alpha = 45;
	var_digit = 105;
	var_ascii = 127;
	var_negative = -1;
	printf("isalpha(%d): %d\n", var_alpha, isalpha(var_alpha));
	printf("ft_isalpha(%d): %d\n", var_alpha, ft_isalpha(var_alpha));
	printf("isalpha(%d): %d\n", var_digit, isalpha(var_digit));
	printf("ft_isalpha(%d): %d\n", var_digit, ft_isalpha(var_digit));
	printf("isalpha(%d): %d\n", var_ascii, isalpha(var_ascii));
	printf("ft_isalpha(%d): %d\n", var_ascii, ft_isalpha(var_ascii));
	printf("isalpha(%d): %d\n", var_negative, isalpha(var_negative));
	printf("ft_isalpha(%d): %d\n", var_negative, ft_isalpha(var_negative));
	printf("\n");
	printf("isdigit(%d): %d\n", var_alpha, isdigit(var_alpha));
	printf("ft_isdigit(%d): %d\n", var_alpha, ft_isdigit(var_alpha));
	printf("isdigit(%d): %d\n", var_digit, isdigit(var_digit));
	printf("ft_isdigit(%d): %d\n", var_digit, ft_isdigit(var_digit));
	printf("isdigit(%d): %d\n", var_ascii, isdigit(var_ascii));
	printf("ft_isdigit(%d): %d\n", var_ascii, ft_isdigit(var_ascii));
	printf("isdigit(%d): %d\n", var_negative, isdigit(var_negative));
	printf("ft_isdigit(%d): %d\n", var_negative, ft_isdigit(var_negative));
	printf("\n");
	printf("isalnum(%d): %d\n", var_alpha, isalnum(var_alpha));
	printf("ft_isalnum(%d): %d\n", var_alpha, ft_isalnum(var_alpha));
	printf("isalnum(%d): %d\n", var_digit, isalnum(var_digit));
	printf("ft_isalnum(%d): %d\n", var_digit, ft_isalnum(var_digit));
	printf("isalnum(%d): %d\n", var_ascii, isalnum(var_ascii));
	printf("ft_isalnum(%d): %d\n", var_ascii, ft_isalnum(var_ascii));
	printf("isalnum(%d): %d\n", var_negative, isalnum(var_negative));
	printf("ft_isalnum(%d): %d\n", var_negative, ft_isalnum(var_negative));
	printf("\n");
}
