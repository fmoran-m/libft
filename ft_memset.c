/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:28:30 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:28 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str;
	unsigned char	word;
	size_t			i;

	word = c;
	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int main (void)
{
	char b[4] = "hola";
	ft_memset(b, 'a', 2);
	printf("%s\n", b);
	return (0);
}
*/
