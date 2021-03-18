/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:52:38 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/10 13:48:14 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || (str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
			return(0);
		x++;
	}		
	return(1);

}

int main()
{
	char  p[] = "Holabuenastaardes";
	printf("%d", ft_str_is_alpha(p));
}
