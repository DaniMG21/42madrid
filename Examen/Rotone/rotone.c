/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 13:17:45 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/18 15:45:50 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_rotone(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if(str[i] == 'z')
			str[i] = 'a';
		else
			str[i] = str[i] + 1;
		i++;
	}
	return (str);
}	


int		main()
{
	char str[] = "abcdefghijklmnñopqrstuvwxyz";
	printf("%s\n", ft_rotone(str));
}
