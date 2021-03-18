/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 10:20:04 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/17 19:22:16 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoi(char *str)
{
	int x;
	int z;
	int resultado;

	resultado = 0;
	z = 1;
	x = 0;
	while ((str[x] == 32) || (str[x] >= 9 && str[x] <= 13))
	{
		x++;
	}
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
		{
			z = -z;
		}
		x++;
	}
	while (str[x] >= 48 && str[x] <= 57)
	{
		resultado = resultado * 10 + str[x] - 48;
		x++;
	}
	return (resultado * z);
}
