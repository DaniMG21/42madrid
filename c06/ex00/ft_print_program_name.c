/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 14:32:39 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/17 15:38:09 by dmartin-         ###   ########.fr       */
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


int		main(int argc, char **argv)
{
	if (argc > 0)
		ft_putstr(argv[0]);
}
