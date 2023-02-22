/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 09:39:29 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/12 11:01:30 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<unistd.h>

int	main(void)
{
		char	l;
		char	m;
		char	r;

		l = '0';
		m = '0';
		r = '0';
		while (l <= '9')
		{
			while (m <= '9')
			{
				while (r <= '9')
				{
					if (r == l || r == m)
						write (1, "", 1);
					else
						write(1, &r, 1);
					r++;
				}
				if (m == l || m == r)
					write (1, "", 1);
				else
					write(1, &m, 1);
				m++;
			}
			if (l == m || l == r)
				write (1, "", 1);
			else
				write(1, &l, 1);
			l++;
		}
		return (0);
}
