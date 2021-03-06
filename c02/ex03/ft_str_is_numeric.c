/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 12:30:33 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/14 16:44:30 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int x;
	int cont;

	x = 0;
	cont = 1;
	while (str[x] != '\0')
	{
		if (str[x] < 48 || str[x] > 57)
		{
			cont = 0;
		}
		x++;
	}
	return (cont);
}
