/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:21:45 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/18 17:18:59 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*new(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*ptr;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *)malloc(((len1 + len2) * sizeof(char)) + 1);
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	ptr = new(s1, s2);
	if (ptr == 0)
		return (0);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		ptr[i] = s2[k];
		i++;
		k++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main (void)
{
	char a[20] = "Hola";
	char b[20] = "Adios";
	char *c = ft_strjoin(a, b);
	printf("%s\n", c);
	return 0;
}
*/
