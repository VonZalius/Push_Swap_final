/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 15:19:51 by abarras           #+#    #+#             */
/*   Updated: 2022/10/28 16:39:21 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		j;
	char	*back;

	i = 0;
	back = NULL;
	while (src[i] != '\0')
		i++;
	j = 0;
	back = malloc((i + 1) * sizeof(char));
	if (!back)
		return (back);
	while (src[j] != '\0')
	{
		back[j] = src[j];
		j++;
	}
	back[j] = '\0';
	return (back);
}
/*
int main()
{
	char str[] = "hello c'est moi je suis sympa";
	printf("%s", ft_strdup(str));
}*/
