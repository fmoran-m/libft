/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:13:24 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/20 23:45:37 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = ft_strlen(dst);
	while(src[i] && k < dstsize - 1)
	{
		dst[k] = src[i];
		i++;
		k++;
	}
	if (dst[k])
		dst[k] = 0;
	return (k);
}
