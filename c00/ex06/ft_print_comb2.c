/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:33:36 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/04 12:20:14 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char todos)
{
	write(1, &todos, 1);
}

void	ft_write2(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_write(char a, char b, char c, char d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			if (a != '9' || b != '8' || c != '9' || d != '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(' ');
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(',');
				ft_putchar(' ');
			}
			else
			{
				ft_write2(a, b, a, b + 1);
			}
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;

	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_write(a, b, a, b + 1);
			b++;
		}
		a++;
	}
}
