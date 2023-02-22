/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complet.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 11:37:13 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/09 12:19:22 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_print_numbers(void);

int	main(void)
{
	ft_print_numbers();
	return (0);
}

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
