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

int	ft_ptr_len(uintptr_t num)
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

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_p_hex(unsigned long long num)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (num == 0)
		len += write(1, "0", 1);
	else
	{
		ft_put_ptr(num);
		len += ft_ptr_len(num);
	}
	return (len);
}

/*
int main()
{
	int i;
	i = -73456;
	//i = 2147483647;
	printf("%s\n", ft_itoa(i));
}*/
