/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:18:42 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/08 12:14:06 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int x;
	x = 0;

	while(str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}

int		main()
{
	char *str = "Alcachofas con pisto";
	ft_putstr(str);
	return (0);
}
