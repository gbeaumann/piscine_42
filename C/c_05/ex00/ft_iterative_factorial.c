/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 14:09:06 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/24 15:19:58 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	a;
	int	b;

	b = 1;
	a = 1;
	while (b <= nb)
	{
		a = a * b;
		b++;
	}
	return (a);
}
