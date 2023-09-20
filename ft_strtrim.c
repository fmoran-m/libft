/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:42:22 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/20 20:46:23 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char const *s1)
{
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	return (i);
}

size_t	first(char const *s1, char const *set)
{
	size_t	a;
	size_t	i;

	a = 0;
	i = 0;
	while (set[i])
	{
		if (set[i] == s1[a])
		{
			a++;
			i = -1;
		}
		i++;
	}	
	return (a);
}

size_t	last(char const *s1, char const *set)
{
	size_t	z;
	size_t	i;

	i = 0;
	z = ft_strlen(s1) - 1;
	while (set[i])
	{
		if (set[i] == s1[z])
		{
			z--;
			i = -1;
		}
		i++;
	}
	return (z);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	z;	
	size_t	i;
	char	*ptr;

	a = first(s1, set);
	z = last(s1, set);
	ptr = (char *)malloc((z - a + 2) * (sizeof(char) + 1));
	i = 0;
	while (a <= z)
	{
		ptr[i] = s1[a];
		i++;
		a++;
	}
	ptr[i] = '\0';
	return (ptr);
}

