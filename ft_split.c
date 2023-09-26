/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:50:00 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/25 19:39:07 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count(char const *s, char c)
{
	int				i;
	int				counter;

	counter = 0;
	i = 0;
	while(s[i])
	{
		if(s[i] == c)
			counter++;
		i++;
	}
	return(counter);
}

char	**reserve_rows(char const *s, char c)
{
	char			**str;
	int 			counter;

	counter = ft_count(s, c) + 1;
	str = malloc(counter * sizeof(char *) + 1);
	str[counter + 1] = NULL;
	if (str == 0)
		return (0);
	return (str);
}

char	**reserve_columns(char const *s, char **str, char c)
{
	int				total;
	int				r_size;
	int				j;
	int				i;
	int				z;
	
	j = 0;
	i = 0;
	r_size = 0;
	total = 0;
	z = 0;
	while (s[total])
	{
		if (s[total] == c)
		{
			str[j] = malloc(sizeof(char) * r_size + 1);
			if (str[j] == 0)
				return (0);
			while (i < r_size)
			{
				str[j][i] = s[z];
				i++;
				z++;
			}
			str[j][i] = 0;
			j++;
			r_size = -1;
		}	
		r_size++;
		total++;
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char			**str;
	
	str = reserve_rows(s, c);
	str = reserve_columns(s, str, c);
	return (str);
}

