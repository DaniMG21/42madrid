/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 13:50:15 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/10 15:20:43 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int x;

	x = 0;
	while (str[x] != '\0')
		{
			if (str[x] >= 'a' && str[x] <= 'z')
			{
			str[x] = str[x] - 'a' + 'A';
			}
			else if (str[x] >= 'A' && str[x] <= 'Z')
			{
				str[x] = str[x] - 'A' + 'A';
			}
			x++;
		}
	return (str);
}

int 	main()
{
	char pepe[] = "DDD jjj GGskn";
	printf("%s\n", ft_strupcase(pepe));
}
