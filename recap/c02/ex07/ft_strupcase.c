/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 22:18:42 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 22:27:41 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int	main(int argc, char *argv[])
{
	argc = 0;
	printf ("%s\n", ft_strupcase(argv[1]));
}
