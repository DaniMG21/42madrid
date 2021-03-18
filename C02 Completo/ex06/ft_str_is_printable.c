/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:15:58 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/10 13:49:54 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_printable(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{	
		if(str[x] <= ' ' || str[x] >= '~')
			return(0);
		x++;
	}
	return(1);
}

int		main()
{
	char pepe[] = "gbfjfabñ";
	printf("%d", ft_str_is_printable(pepe));
}

