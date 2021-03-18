/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 12:42:21 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/09 13:13:10 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int a;
	int x;

	x = 0;

	while(x < size / 2)
	{
		a = tab[x];
		tab[x] = tab[size - 1 - x];
		tab[size - 1 - x] = a;
		
		x++;
	}	
}

int		main()
{

	int tab[] = {1, 2, 3, 4, 5, 6};
	int size;
	int i;
	char c;

	i = 0;

	size = 6;

	ft_rev_int_tab(tab, size);
	while(i < size)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}

}
