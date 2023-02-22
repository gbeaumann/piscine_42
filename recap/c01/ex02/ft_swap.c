/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:01:00 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 13:08:35 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	stock;

	stock = *a;
	*a = *b;
	*b = stock;
}

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 24;
	b = 42;
	pa = &a;
	pb = &b;
	printf ("%d\n", a);
	printf ("%d\n", b);
	ft_swap(pa, pb);
	printf ("%d\n", a);
	printf ("%d\n", b);
}
