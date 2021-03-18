/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:33:14 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/09 12:13:34 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int temp;
	int n;
	int m;

	n = 0;
	while (n < size)
	{
		m = n + 1;
		while (m < size)
		{
			if (tab[n] > tab[m])
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
