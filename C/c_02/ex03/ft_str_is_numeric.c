/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:23:04 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/15 21:53:43 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (str[cpt] < 48 || str[cpt] > 57)
			return (0);
		cpt++;
	}
	return (1);
}
