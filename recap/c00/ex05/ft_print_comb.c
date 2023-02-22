/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:35:51 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 10:42:57 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0' - 1;
	while (c++ < '7')
	{
		d = c;
		while (d++ < '8')
		{
			u = d;
			while (u++ < '9')
			{
				write (1, &c, 1);
				write (1, &d, 1);
				write (1, &u, 1);
				if ( c < '7')
					write (1, ", ", 2);
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
}
