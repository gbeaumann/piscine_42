/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:54:49 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/29 13:36:59 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	char	ca;
	char	cb;

	a = 0;
	while (a < 98)
	{
		b = a +1;
		while (b < 99)
		{
			
			write (1, &a, 1);
			write (1, " ", 1);
			write (1, &b, 1);
			write (1, ",", 1);
			b++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
}
