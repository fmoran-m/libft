/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:42:05 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/22 13:28:47 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pointer(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	size_t			k;
	char			*new;

	i = 0;
	k = 0;
	while (i < start)
		i++;
	while (s[i] && k < len)
	{
		k++;
		i++;
	}
	new = (char *)malloc(k * sizeof(char) + 1);
	if (new == NULL)
		return (NULL);
	return (new);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t			i;
	char			*new;

	i = 0;
	if (start > ft_strlen(s))
	{
		new = (char *)malloc(1);
		if (new == NULL)
			return (NULL);
		*new = '\0';
		return (new);
	}
	new = pointer(s, start, len);
	while (s[start] && i < len)
	{
		new[i] = s[start];
		i++;
		start++;
	}
	new[i] = '\0';
	return (new);
}
