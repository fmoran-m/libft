/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 12:36:30 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/21 18:12:30 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	total_amount;

	i = 0;
	total_amount = size * count;
	ptr = malloc(size * count);
	if (ptr == 0)
		return (0);
	while (i < total_amount)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}