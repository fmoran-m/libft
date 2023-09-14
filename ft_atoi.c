/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 20:36:15 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/14 20:48:25 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	acum;
	int	i;
	int	flag;

	acum = 0;
	i = 0;
	flag = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			flag = 1;
		i++;
	}	
	while (str[i] >= '0' && str[i] <= '9')
	{
		acum = acum * 10 + (str[i] - 48);
		i++;
	}
	if (flag == 1)
		acum = acum * -1;
	return (acum);
}
/*
int main (void)
{
	int a = atoi("2147483648");
	int b = ft_atoi("t147483648");
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}
*/
