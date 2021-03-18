/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitaliza.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:44:22 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/12 10:42:09 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] - 'A' + 'a';
		if (str[x] >= 'a' && str[x] <= 'z')
		{
			if (x == 0 || !((str[x - 1] >= 'A' && str[x - 1] <= 'Z') || 
					   (str[x - 1] >= 'a' && str[x - 1]	<= 'z') ||
					   (str[x - 1] >= '0' && str[x - 1] <= '9')))
					str[x] = str[x] - 'a' + 'A';
		}
		x++;
	}
	return(str);
}

int		main()
{
	char pepe[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(pepe));
}
