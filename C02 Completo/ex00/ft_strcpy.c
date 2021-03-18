/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 16:42:34 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/15 18:46:52 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while(src[i] != '\0')
	{	
		dest[i] = src[i];
		i++;
	}
	printf("%s\n", dest);
	return (dest);
}

int		main()
{
	char dest[20] = "no imprimir";
	char src[20] = "imprime esto";
	ft_strcpy(&dest[0], &src[0]);

}
