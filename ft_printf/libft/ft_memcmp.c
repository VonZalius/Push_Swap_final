/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:58:40 by abarras           #+#    #+#             */
/*   Updated: 2022/10/31 15:51:47 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*test1;
	unsigned char	*test2;

	i = 0;
	test1 = (unsigned char *)s1;
	test2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (*test1 == *test2 && ++i < n)
	{
		test1++;
		test2++;
	}
	return ((int)(*test1 - *test2));
}
/*
int main()
{
	char str1[] = "1234567890qwertyuiop";
	char str2[] = "1234567890qwertyuiop";
	printf("%i\n", ft_memcmp(str1, str2, 20));
	printf("%i\n", memcmp(str1, str2, 20));
}*/
