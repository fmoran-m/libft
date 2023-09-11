/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:42:26 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/11 19:50:11 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
/*
int main(void)
{
	int a = ft_isalpha('a');
	int b = isalpha('a');
	printf("%d", a);
	printf("%d", b);
	return (0);
}
*/
