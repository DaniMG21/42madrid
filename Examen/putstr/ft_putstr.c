/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 11:47:35 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/18 11:58:24 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putstr(char *str)
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
	char str[] = "hola";
	ft_putstr(str);
}
