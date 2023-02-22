/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 16:48:54 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/27 20:03:46 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

void	putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int i;

	if (argc > 1)
	{
		i = argc - 1;
		while (argv[i] && i > 0)
		{
			putstr(argv[i]);
			write(1, "\n", 1);
			i--;
		}
	}
}
