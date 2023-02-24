/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_va_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:14:37 by abarras           #+#    #+#             */
/*   Updated: 2022/11/10 16:09:03 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_int_pf(int va_arg, const char *str, int re)
{
	if (*str == 'c')
		re += ft_putchar_printf(va_arg, 1);
	else if (*str == 'i' || *str == 'd')
		re += ft_putnbr_printf(va_arg, 1);
	else if (*str == 'x' || *str == 'X' || *str == 'p')
		re += ft_print_hex(va_arg, *str);
	else if (*str == 'u')
		re += ft_unsigned_putnbr_fd(va_arg, 1);
	return (re);
}

static int	ft_argcheck(const char *str, int re, va_list ap)
{
	if (*str == 'c' || *str == 'i' || *str == 'd'
		|| *str == 'x' || *str == 'X' || *str == 'u')
		re += ft_int_pf(va_arg(ap, int), str, 0);
	else if (*str == 's')
		re += ft_putstr_printf(va_arg(ap, char *), 1);
	else if (*str == '%')
		re += ft_putchar_printf('%', 1);
	else if (*str == 'p')
		re += ft_print_p_hex(va_arg(ap, unsigned long long));
	return (re);
}

int	ft_printf(const char *str, ...)
{
	int		re;

	re = 0;
	va_list(ap);
	va_start(ap, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			re = ft_argcheck(str, re, ap);
			str++;
		}
		else
		{
			write(1, &*str++, 1);
			re++;
		}
	}
	va_end(ap);
	return (re);
}
/*
int main()
{
	//printf("%s\n", (char *)NULL);
	printf("%i\n", ft_printf("%u\n", 0));
	printf("%i\n", printf("%u\n", 0));
	//ft_printf("c = %c\ns = %s\ni = %i\nd = %d\nx = %x\nX = %X\nfin du str\n",
	 117, "salut", 789, 101112, -84567, -84567);
}*/
