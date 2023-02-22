/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbeauman <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:22:11 by gbeauman          #+#    #+#             */
/*   Updated: 2021/07/21 16:14:41 by gbeauman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	foin[] = "this is r ro rock rocket league rocketleague";
	char	aiguille[] = "rocketleague";

	printf("%s\n", ft_strstr(foin, aiguille));
	return (0);
}
