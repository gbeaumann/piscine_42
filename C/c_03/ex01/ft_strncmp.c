/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 09:54:06 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/19 12:57:44 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (s1[i] != '\0' && i < n)
		i++;
	while (s2[i2] != '\0' && i2 < n)
		i2++;
	if (i == i2)
		return (0);
	else
		return (i - i2);
}
