/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:17:29 by abarras           #+#    #+#             */
/*   Updated: 2022/11/02 14:54:03 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*final;
	size_t	i;

	final = malloc(size * count);
	if (!final)
		return (NULL);
	i = 0;
	while (i < size * count)
	{
		final[i] = '\0';
		i++;
	}
	return (final);
}
/*
int main ()
{
	printf("%s\n", ft_calloc(0, 0));
}*/
