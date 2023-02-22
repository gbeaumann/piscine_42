/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:13:35 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/24 19:39:17 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative(int nb, int power)
{
	int	r;

	r = nb;
	if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 1)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
