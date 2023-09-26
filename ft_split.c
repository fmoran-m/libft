/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:00 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/26 21:08:29 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	n_sep(char const *s, char c)
{
	unsigned char	ca;
	size_t			i;
	size_t			n;

	ca = c;
	i = 0;
	n = 0;
	while(s[i])
	{
		if (s[i] == ca)
			n++;
		i++;
	}	
	return (n);
}

char **res_mem(char const *s, char c, size_t n)
{
	unsigned char	ca;
	char			*ptr;
	size_t			i;
	size_t			j;
	size_t			r_size;

	ca = c;
	i = 0;
	j = 0;
	r_size = 0;
	ptr = malloc(sizeof(char *) * (n+1));
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == ca)
		{
			ptr[j] = malloc(p_size * r_size + 1)
			if (ptr[j] == NULL)
				return (NULL);
			r_size = 0;
			j++;
		}
	i++;
	r_size++;
	}
	return (ptr);
}

char **ft_split(char const *s, char c)
{
	size_t			n;
	char 			**ptr;
	size_t 			i;
	size_t 			j;
	unsigned char	ca;

	n = n_sep(s, c);
	ptr = res_mem(s, c, n);
	ca = c;
	i = 0;
	while(ptr[i])
	{
		j = 0;
		while (ptr[i][j])
		{
			while





