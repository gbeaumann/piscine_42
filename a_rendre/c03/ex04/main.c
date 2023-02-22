/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:22:11 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/25 10:24:58 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	foin[] = "Gu il l a u m e Guillaum Gui llaume Guillaume est beau nu";
	char	aiguille[] = "Guillaume";

	printf("%s\n", strstr(foin, aiguille));
	printf("%s\n", ft_strstr(foin, aiguille));
	return (0);
}
