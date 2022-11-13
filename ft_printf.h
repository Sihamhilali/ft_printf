/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 13:38:10 by selhilal          #+#    #+#             */
/*   Updated: 2022/11/13 17:53:30 by selhilal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdarg.h>
# include<unistd.h>

void	ft_putstr(char *s, int count);
void	ft_putnbr(int n, int count);
void	ft_putchar(char c, int count);
void	ft_putnbr_unsigned(unsigned int n, int count);
void	nbrhexa(unsigned long long n, char var, int count);
void	address(unsigned long long n, int count);

#endif