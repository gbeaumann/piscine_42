/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 13:26:46 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/09 14:17:11 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	ft_is_negative(void);

int	main(void)
{
	ft_is_negative();
	return (0);
}

void	ft_is_negative(void)
{
	int	n;

	n = 11;
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
}
