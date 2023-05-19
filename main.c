/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 15:24:24 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/19 17:04:22 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char	**lol;

	if (argc == 3)
		ft_strtrim((char const *)argv[1], (char const *)argv[2]);
	else
	{
		lol = ft_split("  1  2222     3333333    4 5 6 7        ", ' ');
		for (int i = 0; lol[i]; i++)
			printf("'%s'\n", lol[i]);
		free(lol);
		printf("\n");
		lol = ft_split("      split       this for   me  !       ", ' ');
		for (int j = 0; lol[j]; j++)
			printf("'%s'\n", lol[j]);
		printf("\n");
		free(lol);
		lol = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
		for (int k = 0; lol[k]; k++)
			printf("'%s'\n", lol[k]);
		printf("\n");
		free(lol);
		// printf("%s\n", ft_itoa(-57));
		// ft_putnbr_fd(-1000, 2);
	}
	return (0);
}
