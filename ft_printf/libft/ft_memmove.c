/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:27:41 by abarras           #+#    #+#             */
/*   Updated: 2022/10/31 16:05:49 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst2;
	char	*src2;

	i = 0;
	if (!dst && !src)
		return (dst);
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 > src2)
		while (len-- > 0)
			dst2[len] = src2[len];
	else
	{
		while (i < len)
		{
			dst2[i] = src2[i];
			i++;
		}
	}
	return (dst);
}
/*
int main(int argc, char **argv)
{
	int len = 5;
	char	*a;
	//char	*b;

	argc = 1;
	printf("src est : %s\n", argv[1]);
	printf("dst est : %s\n", argv[1] +3);
	a = (char *)ft_memmove(argv[1] + 3, argv[1], len);
	printf("%s\n", a);
	//b = (char *)memmove(argv[1], argv[2], len);
	//printf("%s\n", b);
}*/
