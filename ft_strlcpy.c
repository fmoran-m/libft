/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:22:35 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:41 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (size == 0)
		return (srclen);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
/*
int main (void)
{
	char dst[29] = "\0";
	char *src = "\0";
	size_t a = ft_strlcpy(dst, src, 7);
	size_t b = strlcpy(dst, src, 7);
	printf("Size is %ld, string is'%s'\n", a, dst);
	printf("Size is %ld, string is'%s'\n", b, dst);
	return 0;
}
*/
