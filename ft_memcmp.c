/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:55:12 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/14 18:57:56 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*str1;
	const char	*str2;
	size_t		i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (*str1 == *str2 && i < n && *str1 != '\0' && *str2 != '\0')
	{
		str1++;
		str2++;
		i++;
	}
	return ((unsigned int)*str1 - (unsigned int)*str2);
}
/*
int main(void)
{
	char *a = "ada";
	char *b = "ad7";
	int c = ft_memcmp (a, b, 10);
	int d =	memcmp(a, b, 10);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
}	
*/
