/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:11:26 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 11:18:20 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	a;
	int	*nb;

	a = 24;
	nb = &a;
	printf ("%d\n", a);
	ft_ft(nb);
	printf ("%d\n", a);
}
