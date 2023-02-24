/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:13:54 by abarras           #+#    #+#             */
/*   Updated: 2022/10/31 14:03:53 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*test;
	char	*test2;

	i = 0;
	test = (void *)s;
	test2 = (char *)s;
	if (n == 0)
		return (NULL);
	while (i <= n - 1)
	{
		if (test2[i] == (char)c)
			return (test);
		i++;
		test++;
	}
	return (NULL);
}
/*
int main()
{
	printf("%s\n", ft_memchr("qwertyuiop", 'y', 7));
	printf("%s\n", memchr("qwertyuiop", 'y', 7));
}*/
