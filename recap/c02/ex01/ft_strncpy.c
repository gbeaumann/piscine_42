/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 15:54:08 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/28 16:39:31 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include	<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	ph[] = "dalut";
	char	ph2[] = "sdjhfkjsdhf";
	unsigned int	nb;

	nb = 2;
	printf ("%s\n", ft_strncpy(ph2, ph, nb));
}
