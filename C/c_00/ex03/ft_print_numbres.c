/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbres.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 12:16:31 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/09 12:21:21 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = '1';
	while (a <= '9')
	{
		write (1, &a, 1);
		a++;
	}
}
