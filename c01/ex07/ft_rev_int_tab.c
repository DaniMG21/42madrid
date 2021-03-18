/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:42:21 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/18 12:55:09 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int x;

	x = 0;
	while (x < size / 2)
	{
		a = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = a;
		x++;
	}
}