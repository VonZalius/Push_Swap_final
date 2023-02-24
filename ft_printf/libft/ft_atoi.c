/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 13:17:39 by abarras           #+#    #+#             */
/*   Updated: 2022/10/28 16:11:47 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		j = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = (i * 10) + (*str - 48);
		str++;
	}
	i = i * j;
	return (i);
}
/*
int main(int argc, char **argv)
{
	//argc = 1;
	//printf("%i\n", (*argv[1] - 48));
	printf("%i\n", ft_atoi("  	-2324"));
	printf("%i\n", atoi("  	-2324"));
}*/
