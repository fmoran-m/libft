/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 20:07:53 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/10/03 20:10:43 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, unsigned char c)
{
	int	flag;
	int	i;
	int	n;

	flag = 1;
	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] != c && flag == 1)
		{
			n++;
			flag = 0;
		}
		if (s[i] == c)
			flag = 1;
		i++;
	}
	return (n);
}

int	ft_len(char const *s, unsigned char c, int total)
{
	int	i;

	i = total;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

void	ft_free_arrays(char **ptr, int i)
{
	int	n;

	n = 0;
	while (n < i)
	{
		free(ptr[n]);
		n++;
	}
	free(ptr);
}

void	ft_allocate_arrays(char const *s, unsigned char c, char **ptr)
{
	int	i;
	int	j;
	int	total;

	i = 0;
	total = 0;
	while (s[total] == c)
		total++;
	while (i < ft_count_words(s, c))
	{
		j = 0;
		while (s[total] != c && s[total])
		{
			ptr[i][j] = s[total];
			total++;
			j++;
		}
		while (s[total] == c && c != 0)
			total++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	int				total;
	int				i;
	char			**ptr;

	total = 0;
	i = 0;
	ptr = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!s || !ptr)
		return (NULL);
	if (!ft_count_words(s, c))
		return (ptr);
	while (i < ft_count_words(s, c))
	{
		if (s[total] != c)
		{
			ptr[i] = ft_calloc(ft_len(s, c, total) - total + 1, sizeof(char));
			if (ptr[i++] == NULL)
				return (ft_free_arrays(ptr, i), NULL);
			total = ft_len(s, c, total);
		}
		else
			total++;
	}
	ft_allocate_arrays(s, c, ptr);
	return (ptr);
}
