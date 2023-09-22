/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmoran-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 19:27:04 by fmoran-m          #+#    #+#             */
/*   Updated: 2023/09/22 20:13:37 by fmoran-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		nr;
	int		original_n;
	char	*str;
	char	*final;
	int		i;
	int		negative;

	original_n = n;
	if (n < 0)
		negative = 1;
	nr = 0;
	while (n > 0)
	{
		n = n / 10;
		nr++;
	}
	str = (char *)malloc(nr * sizeof(char) + 1 + negative);
	if (str == 0)
		return (0);
	i = 0;
	while (original_n > 0)
	{
		str[i] = (original_n % 10) + 48;
		original_n = original_n / 10;
		i++;
	}
	str[i] = 0;
	i--;
	final = (char *)malloc(nr * sizeof(char) + 1 + negative);
	if (final == 0)
		return (0);
	nr = 0;
	while (i >= 0)
	{
		final[nr] = str[i];
		nr++;
		i--;
	}
	final[nr] = 0;
	return (final);
}
	//TENER EN CUENTA NEGATIVOS, CONTROL DE ERRORES Y PASAR NORMINETTE (DIVIDIR EN FUNCIONES)
