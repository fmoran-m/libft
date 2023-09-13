/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:41:54 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/13 14:14:18 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*destiny;
	const unsigned char		*source;

	destiny = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		destiny[i] = source[i];
		i++;
	}
	return (destiny);
}
/*
int main (void)
{
	char a[4] = "hola";
	char b[4] = "aaaa";
	char *c = ft_memcpy(a, b, 4);
	char *d = memcpy(a, b, 4);
	printf("%s\n", c);
	printf("%s\n", d);
	return(0);
}
*/
