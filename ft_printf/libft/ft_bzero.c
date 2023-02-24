/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:27:41 by abarras           #+#    #+#             */
/*   Updated: 2022/10/28 16:13:20 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
	return (s);
}
/*
int main(int ac, char **av)
{
	ac = 1;
	char *b;
	size_t len = 5;
	b = ft_bzero(av[1], len);
	printf("%sabc\n", b);
	b = bzero(av[1], len);
	printf("%sabc\n", b);
}*/
