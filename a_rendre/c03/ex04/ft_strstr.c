/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:20:09 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/25 10:25:39 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	i2;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		i2 = 0;
		if (str[i] == to_find[i2])
		{
			while (str[i + i2] == to_find[i2])
			{
				i2++;
				if (to_find[i2] == '\0')
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
