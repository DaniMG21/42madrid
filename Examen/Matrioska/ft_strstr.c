/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 12:18:25 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/18 13:16:03 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char 	*ft_strstr(char *str, char *to_find)
{
	int x;
	int y;

	x = 0;
	while(str[x] == '\0')
		return (str);
	while(str[x] != '\0')
	{
		y = 0;
		while(str[x + y] == to_find[y])
		{
			y++;
			if(to_find[y] == '\0')
				return (str + x);
		}
		x++;
	}
	return (0);
}	

int		main()
{
	char str[] = "hello world";
	char tf[] = "world";
	printf("%s\n", ft_strstr(str, tf));
}

