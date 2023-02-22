/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 19:30:13 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/24 20:57:36 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
	{
		return nb * ft_recursive_power(nb, power - 1);
	}
	else if (nb == 0 && power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (nb);
}
