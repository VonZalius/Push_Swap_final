/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:43:13 by abarras           #+#    #+#             */
/*   Updated: 2022/11/02 11:53:12 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*final;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	final = (char *)malloc((len + 1) * sizeof(char));
	if (!final)
		return (NULL);
	while (len != 0)
	{
		final[i] = s[start];
		i++;
		start++;
		len--;
	}
	final[i] = '\0';
	return (final);
}
/*{
	char	*final;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	final = (char *)malloc((len + 1) * sizeof(char));
	if (!final)
		return (NULL);
	while (start != 0)
	{
		s++;
		start--;
	}
	while (len != 0)
	{
		final[i] = s[i];
		i++;
		len--;
	}
	return (final);
}*/
/*
int main()
{
	printf("%s\n", ft_substr("qwertyuiop1234567890", 400, 5));
}*/
