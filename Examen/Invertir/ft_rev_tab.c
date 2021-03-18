/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 09:59:19 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/18 13:10:39 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char		*ft_rev_tab(char *str)
{
	int n;
	int m;
	int temp;

	n = 0;
	m = 0;
	while(str[m] != '\0')
		m++;

		while(n < m / 2)
		{
			temp = str[n];
			str[n] = str[m - 1 - n];
			str[m - 1 - n] = temp;
			n++;
		}
		return (str);
}

int		main()
{
	char str[] = "Rainbow Dash";
	ft_rev_tab(str);
}
