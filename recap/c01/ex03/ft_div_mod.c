/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:09:25 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 13:13:29 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	printf("%d\n", a);
	printf("%d\n", b);
	ft_div_mod(a, b, pa, pb);
	printf("%d\n", a);
	printf("%d\n", b);
}
