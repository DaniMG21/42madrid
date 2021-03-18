/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 10:41:20 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/09 13:12:38 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_strlen(char *str)
{
	int x;
	x = 0;

	while(str[x] != '\0')
	{
	x++;
	}
	printf("%d\n", x);
}

int		main()
{
	char *str = "Espárragos con alioli";
	ft_strlen(str);
	
	return (0);
}
