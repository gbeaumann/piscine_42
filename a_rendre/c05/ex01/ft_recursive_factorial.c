/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 15:30:43 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/24 18:09:47 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		return nb *ft_recursive_factorial(nb -1);
	}
	else if (nb < 0)
		return (0);
	else
		return (nb);
}
