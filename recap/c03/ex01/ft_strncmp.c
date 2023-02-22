/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 10:25:46 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/29 12:33:56 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

int	main(int argc, char *argv[])
{
	char	*s1;
	char	*s2;
	char	*nb;
	int		i;
	int		i2;
	int		n;
	char	rr;
	int		r;

	argc = 0;
	s1 = argv[1];
	s2 = argv[2];
	nb = argv[3];
	n = 0;
	i = 0;
	while (nb[i] && (nb[i] >= '0' && nb[i] <= '9'))
	{
		n = n * 10 + (nb[i] - '0');
		i++;
	}
	i2 = 0;
	while (s1[i2] && i2 < n)
	{
		if (s1[i2] != s2[i2])
		{
			r = s1[i2] - s2[i2];
			rr = r;
			write (1, &rr, 3);
		}
		i2++;
	}
}
