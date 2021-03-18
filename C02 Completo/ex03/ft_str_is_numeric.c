/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:30:33 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/10 13:48:34 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_numeric(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{	
		if(str[x] >= 48 || str[x] <= 57)
		return(1);
		x++;
	}
	return(0);
}

int		main()
{
	char pepe[] = "ff";
	printf("%d", ft_str_is_numeric(pepe));
}
