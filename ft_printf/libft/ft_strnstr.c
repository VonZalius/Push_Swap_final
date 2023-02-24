/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:22:29 by abarras           #+#    #+#             */
/*   Updated: 2022/10/31 14:51:14 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(needle) > ft_strlen(haystack))
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i <= len)
	{
		j = 0;
		while ((needle[j] == haystack[j + i]) && (needle[j] != '\0')
			&& ((i + j) < len))
			j++;
		if (j == ft_strlen(needle))
			return (&((char *)haystack)[i]);
		i++;
	}
	return (NULL);
}
/*
int main(int argc, char **argv)
{
	argc = 1;
	printf("%s\n", ft_strnstr(argv[1], argv[2], 9));
	printf("%s\n", strnstr(argv[1], argv[2], 9));
}*/
