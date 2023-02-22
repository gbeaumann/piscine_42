/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combcorr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 11:48:35 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/14 13:09:37 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_print_comb(void)
{
	int	centaine;
	int	dizaine;
	int	unite;

	centaine = '0' - 1;
	while (centaine++ < '7')
	{
		dizaine = centaine;
		while (dizaine++ < '8')
		{
			unite = dizaine;
			while (unite++ < '9')
			{
				write (1, &centaine, 1);
				write (1, &dizaine, 1);
				write (1, &unite, 1);
				if (centaine < '7')
					write (1, ", ", 2);
			}
		}
	}
}
