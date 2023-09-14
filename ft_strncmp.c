/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 13:56:55 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/14 14:00:46 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (*s1 == *s2 && i < n && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
		i++;
	}
	return ((unsigned int) *s1 - (unsigned int)*s2);
}
/*
int main(void)
{
	char *a = "aaaaad";
	char *b = "aaaaaz";
	int c = ft_strncmp(a, b, 10);
	int d = strncmp(a, b, 10);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
}
*/
