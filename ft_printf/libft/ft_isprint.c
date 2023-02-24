/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:01:28 by abarras           #+#    #+#             */
/*   Updated: 2022/10/28 16:18:46 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
//#include <ctype.h>

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
		return (1);
	return (0);
}
/*
int main()
{
	int i;

	i = '8';
	printf("%i\n",(ft_isprint(18)));
	printf("%i\n",(isprint(18)));
}*/
