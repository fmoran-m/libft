/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:22:32 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 21:48:19 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	first;

	first = *s;
	while (*s != '\0')
		s++;
	while (*s != first && *s != c)
		s--;
	if (*s == first && *s != c)
		return (0);
	else
		return ((char *)s);
}
/*
int main(void)
{
	char *s = "Hola";
	char *a = ft_strrchr(s, 'H');
	printf("%s\n", a);
	return (0);
}
*/
