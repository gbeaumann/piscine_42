/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 10:27:38 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/19 12:38:54 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i2] != '\0')
		i2++;
	while (src[i] != '\0')
	{
		dest[i + i2] = src[i];
		i++;
	}
	dest[i2 + i] = '\0';
	return (dest);
}
