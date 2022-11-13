/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:40:33 by selhilal          #+#    #+#             */
/*   Updated: 2022/11/13 17:51:07 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	_printf_f(const char *formt, va_list arg, int i, int rest)
{
	if (formt[i] == 'd' || formt[i] == 'i')
		ft_putnbr(va_arg(arg, int), rest);
	else if (formt[i] == 's')
		ft_putstr(va_arg(arg, char *), rest);
	else if (formt[i] == 'x' || formt[i] == 'X')
		nbrhexa(va_arg(arg, int), formt[i], rest);
	else if (formt[i] == 'c')
		ft_putchar(va_arg(arg, char), rest);
	else if (formt[i] == 'p')
		address(va_arg(arg, unsigned long long *), rest);
	else if (formt[i] == 'p')
		ft_putnbr_unsigned(va_arg(arg, unsigned int), rest);
	else if (formt[i] == '%')
		ft_putchar('%', rest);
	else
		ft_putchar(formt[i], rest);
}

int	ft_printf(const char *formt, ...)
{
	va_list	arg;
	int		i;
	int		resulta;

	i = 0;
	resulta = 0;
	va_start(arg, formt);
	while (formt[i] != '\0')
	{
		if (formt[i] == '%')
		{
			i++;
			_printf_f(formt, arg, i, resulta);
		}
		else
			ft_putchar(formt[i], resulta);
		i++;
	}
	va_end(arg);
	return (resulta);
}
