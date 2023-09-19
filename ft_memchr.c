/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 15:51:28 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:17 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	str = s;
	i = 0;
	while (*str != '\0' && i < (n - 1) && *str != c)
	{
		str++;
		i++;
	}
	if (*str != c || i == 0)
		return (0);
	else
		return ((char *)str);
}
/*
int main(void)
{
	char *s = "Hola";
	char *p = ft_memchr(s, 'z', 2);
	printf("%s\n", p);
	return 0;
}
*/
