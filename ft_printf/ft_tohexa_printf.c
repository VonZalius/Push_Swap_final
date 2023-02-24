/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:10:09 by abarras           #+#    #+#             */
/*   Updated: 2022/11/10 15:52:16 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int num)
{
	int	len;

	len = 0;
	while (num != 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

void	ft_put_hex(unsigned int num, const char format)
{
	if (num >= 16)
	{
		ft_put_hex(num / 16, format);
		ft_put_hex(num % 16, format);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (format == 'x' || format == 'p')
				ft_putchar_fd((num - 10 + 'a'), 1);
			if (format == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_print_hex(unsigned int num, const char format)
{
	if (num == 0)
		return (write(1, "0", 1));
	else
		ft_put_hex(num, format);
	return (ft_hex_len(num));
}
/*static size_t	ft_nb(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		i++;
	while (nb != '\0')
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

static char	*ft_tohexa_printf(char	*str, int nb, int i)
{
	while (i >= 0)
	{
		if (nb % 16 == 10)
			str[i] = 97;
		else if (nb % 16 == 11)
			str[i] = 98;
		else if (nb % 16 == 12)
			str[i] = 99;
		else if (nb % 16 == 13)
			str[i] = 100;
		else if (nb % 16 == 14)
			str[i] = 101;
		else if (nb % 16 == 15)
			str[i] = 102;
		else
			str[i] = nb % 16 + 48;
		i--;
		nb = nb / 16;
	}
	//if (*str == '0')
	//	*str = '-';
	return (str);
}

char	*ft_itoa_hexa(int n)
{
	int				i;
	char			*str;
	long int		nb;

	i = ft_nb(n);
	nb = n;
	if (nb == -2147483648)
		return ("-80000000");
	str = malloc(i + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		*str = '-';
		nb *= -1;
	}
	if (nb == 0)
		*str = '0';
	str[i] = '\0';
	i--;
	return (ft_tohexa_printf(str, nb, i));
}*/
/*
int main()
{
	int i;
	i = -73456;
	//i = 2147483647;
	printf("%s\n", ft_itoa(i));
}*/
