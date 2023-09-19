/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:29:51 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 20:35:26 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <ctype.h>
//#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int main (void)
{
	int a = ft_isascii(0);
	int b = isascii(0);
	int c = ft_isascii(127);
	int d = isascii(127);	
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n",a);
	printf("%d\n", a);
	return (0);
}
*/
