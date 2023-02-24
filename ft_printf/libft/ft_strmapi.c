/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 11:00:18 by abarras           #+#    #+#             */
/*   Updated: 2022/11/03 11:39:12 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*final;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	final = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (!final)
		return (NULL);
	while (i < ft_strlen(s))
	{
		final[i] = f(i, s[i]);
		i++;
	}
	final[i] = '\0';
	return (final);
}
