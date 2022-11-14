/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpercent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:40:17 by selhilal          #+#    #+#             */
/*   Updated: 2022/11/14 11:40:20 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ad_nbrhexa(unsigned long long n, char var, int count)
{
	char	*hex;

	if (var == 'X')
		hex = "0123456789ABCDEF";
	else if (var == 'x')
		hex = "0123456789abcdef";
	if (n >= 16)
	{
		nbrhexa(n / 16, var, count);
		nbrhexa(n % 16, var, count);
	}
	else if (n < 16)
	{
		ft_putchar(hex[n % 16], count);
	}
}

void	address(unsigned long n, int count)
{
	ft_putstr("0x", count);
	ad_nbrhexa(n, 'x', count);
}
