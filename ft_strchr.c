/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:14:17 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 22:04:14 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ca;

	ca = c;
	while (*s && *s != ca)
		s++;
	if (*s == ca)
		return ((char *)s);
	else
		return (0);
}
/*
int main(void)
{
	char *s = "teste"; 
	char *b = ft_strchr(s, 't' + 256);
	char *c = strchr(s, 't' + 256);
	printf("%s\n", b);
	printf("%s\n", c);
	return (0);
}
*/
