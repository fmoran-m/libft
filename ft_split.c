/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:00 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/27 21:23:54 by fmoran-m         ###   ########.fr       */
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

char	**reserve_rows(size_t n_rows)
{
	char	**ptr;

	ptr = malloc((sizeof(char*) * (n_rows + 1)));
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

void	reserve_memory(char const *s, char c, char **ptr)
{
	size_t	total;
	size_t	n;
	size_t	i;
	size_t flag;

	total = 0;
	i = 0;
	n = 0;
	flag = 0;
	while(s[total])
	{
		if (s[total] != c)
			flag = 1;
		if (s[total] == c && flag == 1)
		{
			ptr[i] = malloc(n + 1);
			if (ptr[i] == NULL)
			{
				n = 0;
				while(n < i)
				{
					free(ptr[i]);
					n++;
				}
				free(ptr);
			}
			flag = 0;
			n = 0;
			i++;
		}
		n++;
		total++;
	}
	ptr[i] = malloc(n + 1);
	if (ptr[i] == NULL)
	{
		n = 0;
		while (n < i)
		{
			free(ptr[i]);
			n++;
		}
	}
	ptr[i + 1] = 0;
}

void	allocate_string(const char *s, char c, char **ptr, size_t n_rows)
{
	size_t	i;
	size_t	j;
	size_t	total;

	i = 0;
	total = 0;
	while (i < n_rows)
	{
		j = 0;
		while (s[total] != c && s[total] != 0)
		{
			ptr[i][j] = s[total];
			total++;
			j++;
		}
		ptr[i][j] = 0;
		while(s[total] == c)
			total++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	size_t 			n_rows;
	char			**ptr;
	char 			*new;

	if(s == 0)
		return (0);
	new = ft_strtrim(s, &c);
	n_rows = count_word(new, c);
	ptr = reserve_rows(n_rows);
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	reserve_memory(new, c, ptr);
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	allocate_string(new, c, ptr, n_rows);
	if (ptr == NULL)
	{
		free(new);
		return (NULL);
	}
	free(new);
	return (ptr);
}
