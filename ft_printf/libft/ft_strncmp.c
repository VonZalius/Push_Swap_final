/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 19:10:51 by abarras           #+#    #+#             */
/*   Updated: 2022/10/31 15:38:51 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (((int)s1[i] == (int)s2[i]) && (i < n - 1)
		&& (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	if (s1[i] != '\0' && s2[i] == '\0')
		return (1);
	if (s1[i] == '\0' && s2[i] != '\0')
		return (-1);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	char s1[] = "salue";
	char s2[] = "salut";
	printf("%d", ft_strncmp(s1, s2, 4));
}*/
