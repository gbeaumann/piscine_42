/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 16:45:31 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 16:58:27 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if ((str[i] < 65 || str[i] > 90) && (str[i] < 97 || str[i] > 122))
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	printf ("%d\n", ft_str_is_alpha("saLuT"));
	printf ("%d\n", ft_str_is_alpha("sa[uT"));
	printf ("%d\n", ft_str_is_alpha(""));
}
