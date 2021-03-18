/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartin- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:02:34 by dmartin-          #+#    #+#             */
/*   Updated: 2021/03/16 15:22:47 by dmartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (s1[x] == '\0' && s2[x] == '\0')
		return (0);
	while (x < n)
	{
		if (s1[x] != '\0' || s2[x] != '\0')
		{
			if (s1[x] < s2[x])
				return (s1[x] - s2[x]);
			else if (s1[x] > s2[x])
				return (s1[x] - s2[x]);
		}
		else
			return (0);
		x++;
	}
	return (0);
}
