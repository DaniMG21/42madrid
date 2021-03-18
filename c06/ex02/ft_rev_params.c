/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 16:10:46 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/17 16:44:46 by dmartin-         ###   ########.fr       */
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

	x = argc - 1;
	while(x > 0)
	{
		while (argv[x] != '\0')
		{
			ft_putstr(argv[x]);
			ft_putstr("\n");
			x--;
			if (argv[0])
					break;
		}
	}
}
