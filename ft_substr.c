/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:42:05 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:57 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*pointer(char const *s, unsigned int start)
{
	size_t	i;
	size_t	k;
	char	*new;

	i = 0;
	k = 0;
	while (i < start)
		i++;
	while (s[i])
	{
		k++;
		i++;
	}
	new = (char *)malloc(k * sizeof(char) + 1);
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new;

	new = pointer(s, start);
	if (new == 0)
		return (0);
	i = 0;
	while (s[start] && i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
/*
int main (void)
{
	char a[20] = "Hola";
	char *b = ft_substr(a, 0, 6);
	printf("%s\n", b);
	return 0;
}
*/
