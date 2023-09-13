/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:14:17 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/13 19:15:05 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == '\0')
		return (0);
	else
		return ((char *)s);
}
/*
int main(void)
{
	char *s = "Hola"; 
	char *b = ft_strchr(s, 'z');
	printf("%s\n", b);
	return (0);
}
*/
