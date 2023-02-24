/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:01:28 by abarras           #+#    #+#             */
/*   Updated: 2022/11/02 16:03:03 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
//#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
int main()
{
	int i;

	i = '8';
	printf("%i\n",(ft_isascii(i)));
	printf("%i\n",(isascii(i)));
}*/
