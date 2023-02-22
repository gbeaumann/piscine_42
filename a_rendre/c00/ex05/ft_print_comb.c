/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:50:04 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/14 11:39:12 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_help(char e);

void	ft_print(char a, char b, char c, char *d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_help(*d);
}

void	ft_print_comb(void)
{
	char	u;
	char	d;
	char	c;

	c = '0';
	while (c++ <= '7')
	{
		d = c;
		while (d++ <= '8')
		{
			u = d;
			while (u++ <= '9')
			{
				if (c > '7')
					ft_print(c - 1, d - 1, u - 1, "\n");
				else if (c < d && d < u)
					ft_print(c - 1, d - 1, u - 1, ",  ");
			}
		}
	}
}
