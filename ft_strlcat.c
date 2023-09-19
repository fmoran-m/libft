/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:13:24 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:38 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;
	size_t	srclen;
	size_t	dstlen;

	i = 0;
	k = 0;
	srclen = ft_strlen(src);
	while (dst[i])
		i++;
	dstlen = i;
	while (src[i] && k < (dstsize - dstlen - 1))
	{
		dst[i] = src[k];
		i++;
		k++;
	}
	dst[i] = '\0';
	if (dstsize < srclen)
		return (srclen + dstsize);
	else
		return (srclen + dstlen);
}
/*
int main (void)
{
	char a[20] = "Ho";
	char b[30] = "Adios";
	size_t n = strlcat(a, b, 20);
	printf("Return is %zu and string is %s\n", n, b);
	return 0;
}
*/
