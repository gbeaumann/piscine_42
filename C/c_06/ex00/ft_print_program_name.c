/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 11:18:31 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/27 11:48:22 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

int	main(int argc, char *argv[])
{
	int i;

	i = 0;
	argc = 0;
	while ( argv[0][i] != '\0')
	{
		write (1, &argv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
