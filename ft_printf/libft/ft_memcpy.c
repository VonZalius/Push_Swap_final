/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:27:41 by abarras           #+#    #+#             */
/*   Updated: 2022/11/01 14:37:24 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst2;
	char		*src2;

	if (!dst && !src)
		return (NULL);
	i = 0;
	dst2 = (char *)dst;
	src2 = (char *)src;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
/*
int main(int argc, char **argv)
{
	int len = 5;
	//char	*a;
	char	*b;

	argc = 1;
	//a = (char *)ft_memcpy(argv[1], argv[2], len);
	//printf("%s\n", a);
	b = (char *)memmove(argv[1], argv[2], len);
	printf("%s\n", b);
}*/
