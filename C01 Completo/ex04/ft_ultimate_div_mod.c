/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:48:43 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/08 11:35:22 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int x;
	int y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
	printf("%d\n", *a);
	printf("%d\n", *b);
}

int		main(void)
{
	int a;
	int b;

	a = 56;
	b = 4;
	ft_ultimate_div_mod(&a, &b);
}
