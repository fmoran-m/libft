/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:42:05 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/21 17:41:02 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pointer(char const *s, unsigned char start)
{
	size_t			i;
	size_t			k;
	char		*new;

	i = 0;
	k = 0;
	while (i < start)
		i++;
	while (s[i])
	{
		k++;
		i++;
	}
	new = (char *)malloc(k * sizeof(char) + 1);
	return (new);
}
		
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*new;
	unsigned char	start1;

	start1 = start;
	new = pointer(s, start1);
	if (new == 0)
		return (0);
	i = 0;
	while (s[start1] && i < len)
	{
		new[i] = s[start1];
		i++;
		start1++;
	}
	new[i] = '\0';
	return (new);
}

