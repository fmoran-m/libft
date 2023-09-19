/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:03:05 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:25 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*invcpy(char *d, char *s, size_t len, size_t z)
{
	size_t	i;

	i = 0;
	while (s[i] && i < len)
	{
		d[z] = s[z];
		z--;
		i++;
	}
	return (d);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;	
	size_t		i;
	size_t		z;

	d = dst;
	s = src;
	z = len - 1;
	i = 0;
	if (s < d)
		d = invcpy(d, (char *)s, len, z);
	else
	{
		while (s[i] && i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return ((char *)d);
}
/*
int	main(void)
{
	char a[400] = "Hola";
	char b[400] = "Adios";
	char *c = ft_memmove(a, b, 1);
	char *d = memmove(a, b, 1);
	printf("%s\n", c);
	printf("%s\n", d);
	return 0;
}
*/
