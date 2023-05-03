/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anunes-c <anunesc-@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:11 by anunes-c          #+#    #+#             */
/*   Updated: 2023/05/03 15:19:41 by anunes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	unsigned char	uc;

	uc = c;
	if (uc > 31 && uc < 127)
		return (1);
	return (0);
}
