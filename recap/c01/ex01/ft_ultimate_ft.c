/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:20:52 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 11:26:39 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	a;
	int	*nb;
	int	**nb2;
	int	***nb3;
	int	****nb4;
	int	*****nb5;
	int	******nb6;
	int	*******nb7;
	int	********nb8;
	int	*********nb9;

	a = 24;
	nb = &a;
	nb2 = &nb;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	nb9 = &nb8;
	printf ("%d\n", a);
	ft_ultimate_ft(nb9);
	printf ("%d\n", a);
}
