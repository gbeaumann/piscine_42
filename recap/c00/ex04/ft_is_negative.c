/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 10:28:14 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 10:34:39 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_is_negative(int n)
{
	char	pos;
	char	neg;

	pos = 'P';
	neg = 'N';
	if (n < 0)
	{
		write (1, &neg, 1);
		write (1, "\n", 1);
	}
	else
	{
		write (1, &pos, 1);
		write (1, "\n", 1);
	}
}

int	main(void)
{
	int	np;
	int	n;
	int	nn;

	np = 3;
	n = 0;
	nn = -5;
	ft_is_negative(np);
	ft_is_negative(n);
	ft_is_negative(nn);
}
