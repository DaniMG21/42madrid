/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 10:13:45 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/07 10:48:18 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%d\n", *div);
	printf("%d\n", *mod);
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 45;
	b = 7;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}
