/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:24:24 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/12 16:30:46 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*lol;

	if (argc == 3)
		ft_strtrim((char const *)argv[1], (char const *)argv[2]);
	else if (argc == 2)
		ft_itoa((int)argv[1]);
	else
	{
		lol = ft_itoa(0);
		printf("%s\n", lol);
	}
	return (0);
}
