/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunes-c@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 19:08:18 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/08 18:51:47 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	number;
	int	signal;

	i = 0;
	number = 0;
	signal = 1;
	while (nptr[i] && ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32))
		i++;
	if (nptr[i] && (nptr[i] == '-' || nptr[i] == '+'))
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (nptr[i] > 47 && nptr[i] < 58)
	{
		number = (number * 10) + (nptr[i] - '0');
		i++;
	}	
	return (number * signal);
}
