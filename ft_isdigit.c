/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <fmoran-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:49:46 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/19 18:40:12 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/*
int main (void)
{
	int a = ft_isdigit('7');
	int b = isdigit('a');
	printf("%d", a);
	printf("%d", b);
	return (0);
}
*/
