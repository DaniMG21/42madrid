/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:10:20 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/10 15:02:47 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_uppercase(char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		if (str[x] >= 65 || str[x] <= 90)
		return(1);
		x++;
	}
		return(0);
}

int		main()
{
	char pepe[] = "fdhk";
	printf("%d", ft_str_is_uppercase(pepe));
}
