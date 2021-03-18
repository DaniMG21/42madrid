/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 15:02:44 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/10 15:20:46 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <='Z')
		{
		str[x] = str[x] - 'A' + 'a';
		}
		else if(str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] = str[x] - 'a' + 'a';
		}
		x++;	
	}
	return(str);
}

int		main()
{
	char pepe[] = "GeHsEE";
	printf("%s\n", ft_strlowcase(pepe));
}