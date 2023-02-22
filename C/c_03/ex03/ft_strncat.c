/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 12:41:13 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/19 13:20:54 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				i2;

	i = 0;
	i2 = 0;
	while (dest[i2] != '\0')
		i2++;
	while (src[i] != '\0' && i < nb)
	{
		dest[i2 + i] = src[i];
		i++;
	}
	dest[i2 + i] = '\0';
	return (dest);
}
