/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:33:14 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/09 10:35:09 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int n;
	int m;

	n = 0;
	while(n < size)
	{
		m =  n + 1;
		while(m < size)
		{
			if(tab[n] > tab[m])
			{
				temp = tab[m];
				tab[m] = tab[n];
				tab[n] = temp;
			}
			m++;
		}
		n++;
	}
}


int		main()
{
	int size;
	int tab[] = {4,3,6,7,2,9,0};
	int n;
	char c;

	n = 0;
	size = 7;
	ft_sort_int_tab(tab, size);
	while(n < size)
	{
		c = tab[n] + '0';
		write(1, &c, 1);
		n++;
	}
}
