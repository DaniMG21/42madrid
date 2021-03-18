/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 15:41:09 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/17 15:56:52 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void		ft_putstr(char *str)
{
	int x;

	x = 0;
	while(str[x] != '\0')
		write(1, str++, 1);
}

int		main(int argc, char **argv)
{
	int x;

	x = 1;
	while(x < argc)
	{
		ft_putstr(argv[x]);
		ft_putstr("\n");
		x++;
	}	
}
