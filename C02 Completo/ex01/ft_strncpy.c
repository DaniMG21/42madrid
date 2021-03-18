/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/10 10:21:34 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/14 18:45:36 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{

	unsigned int x;

	x = 0;
	while(src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	printf("%s\n", dest);
	return (dest);
}

int		main()
{
	unsigned int n;

	n = 0;

	char dest[25] = "12345abcde";
	char src[25] = "abcde12345";
	ft_strncpy(&dest[0], &src[0], n);
}
