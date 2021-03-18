/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:05:43 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/10 13:48:47 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_lowercase(char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
	{
		if(str[x] >= 97 || str[x] <= 122)
		return(1);
		x++;
	}
	return(0);
}

int		main()
{
	char pepe[] = "hola";
	printf("%d", ft_str_is_lowercase(pepe));
}
