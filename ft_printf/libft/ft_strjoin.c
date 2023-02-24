/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:21:57 by abarras           #+#    #+#             */
/*   Updated: 2022/10/31 13:40:05 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*final;
	int		i;
	int		j;

	final = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!final)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		final[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		final[i] = s2[j];
		i++;
		j++;
	}
	final[i] = '\0';
	return (final);
}
/*
int main(int argc, char **argv)
{
	argc = 1;
	printf("%s\n", ft_strjoin(argv[1], argv[2]));
}*/
