/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:14:43 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 13:19:53 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	stock;

	stock = *a;
	*a = *a / *b;
	*b = stock % *b;
}

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 11;
	b = 2;
	pa = &a;
	pb = &b;
	printf ("%d\n", a);
	printf ("%d\n", b);
	ft_ultimate_div_mod(pa, pb);
	printf ("%d\n", a);
	printf ("%d\n", b);
}
