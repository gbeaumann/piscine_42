/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:16:36 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/26 22:23:08 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	while (nb * nb != n)
	{
		if (nb == 0)
			return (0);
		nb--;
	}
	return (nb);
}
