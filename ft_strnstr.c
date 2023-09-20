/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:22:18 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/20 20:45:26 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;
	size_t	temp;

	i = 0;
	k = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0' && i < len)
	{
		temp = i;
		while (haystack[i] && needle[k] && haystack[i] == needle[k] && i < len)
		{
			i++;
			k++;
		}
		if (needle[k] == '\0')
			return ((char *)haystack + temp);
		i = temp;
		k = 0;
		i++;
	}
	return (0);
}

