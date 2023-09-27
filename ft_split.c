/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:00 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/27 14:28:24 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, unsigned char ca)
{
	size_t	flag;
	size_t	i;
	size_t	n;

	flag = 1;
	i = 0;
	n = 0;

	while(s[i])
	{
		if(s[i] != ca && flag == 1)
		{
			n++;
			flag = 0;
		}
		if (s[i] == ca)
			flag = 1;
		i++;
	}
	return (n);
}

char	**allocate_array(char const *s, unsigned char ca, char **ptr, size_t n_rows)
{
	size_t i;
	size_t j;
	size_t z;

	i = 0;
	z = 0;
	while (i < (n_rows + 1))
	{
		j = 0;
		while(s[z] != ca)
		{
			ptr[i][j] = '.';
			j++;
		}
		ptr[i][j] = 0;
		i++;
		z++;
	}
	ptr[j] = 0;
	return (ptr);
}

void	ft_split(char const *s, char c)
{
	size_t 			n_rows;

	s = ft_strtrim(s, &c);
	n_rows = count_word(s, c);
	printf("%zu\n", n_rows);
}
