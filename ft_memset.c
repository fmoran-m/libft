/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:28:30 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/12 19:43:54 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		str[i] = word;
		i++;
	}
	return (b);
}
/*
int main (void)
{
	char b[15] = "hola";
	ft_memset(b, 'a', 15);
	printf("%s\n", b);
	return (0);
}
*/
