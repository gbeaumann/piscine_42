/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 14:47:44 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 14:52:53 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	printf ("%d\n", ft_strlen("salutation"));
}
