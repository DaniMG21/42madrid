/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 10:13:06 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/08 10:32:43 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	parte2(char a, char b, char c);

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			parte2(a, b, c);
			b++;
		}
		a++;
	}
}

void	parte2(char a, char b, char c)
{
	while (c <= '9')
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7' || b != '8' || c != '9')
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		c++;
	}
}

int 	main(void)
{
	ft_print_comb();
}
