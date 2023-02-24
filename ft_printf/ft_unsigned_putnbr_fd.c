/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:17:21 by abarras           #+#    #+#             */
/*   Updated: 2022/11/10 14:12:15 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	ft_putchar(char b, int fd);

static size_t	ft_nb(unsigned int nb)
{
	int	i;

	i = 0;
	while (nb != '\0')
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_unsigned_putnbr_fd(unsigned int n, int fd)
{
	int	i;

	i = ft_nb(n);
	if (n == 0)
		i++;
	if (n > 9)
	{
		ft_unsigned_putnbr_fd(n / 10, fd);
		ft_unsigned_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar(n + '0', fd);
	}
	return (i);
}

static void	ft_putchar(char b, int fd)
{
	write(fd, &b, 1);
}
/*
int main()
{
	int i;
	i = 7654;
	//valeur min = -2147483648
	ft_putnbr(i);
}*/
