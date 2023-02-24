/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:17:21 by abarras           #+#    #+#             */
/*   Updated: 2022/11/02 16:14:41 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void		ft_putnbr_fd(int n, int fd);
static void	ft_putchar(char b, int fd);

static void	ft_min(int fd)
{
	write(fd, "-2147483648", 11);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_min(fd);
	else
	{
		if (n < 0)
		{
			ft_putchar('-', fd);
			n = n * -1;
		}
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			ft_putchar(n + '0', fd);
		}
	}
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
