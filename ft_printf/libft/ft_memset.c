/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:27:41 by abarras           #+#    #+#             */
/*   Updated: 2022/10/28 16:24:13 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	char		*str;

	str = b;
	i = 0;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*
int main(int ac, char **av)
{
	ac = 1;
	char *b;
	int c = 50;
	size_t len = 5;
	b = ft_memset(av[1], c, len);
	printf("%s\n", b);
	b = memset(av[1], c, len);
	printf("%s\n", b);
}*/
