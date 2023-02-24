/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 13:01:28 by abarras           #+#    #+#             */
/*   Updated: 2022/10/28 16:17:55 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 
//#include <ctype.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
int main()
{
	int i;

	i = '8';
	printf("%i\n",(ft_isdigit(i)));
	printf("%i\n",(isdigit(i)));
}*/
