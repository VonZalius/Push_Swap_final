/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:33:56 by abarras           #+#    #+#             */
/*   Updated: 2023/01/11 11:33:59 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_isdone(int *p1, int argc)
{
	int	i;

	i = 0;
	while (p1[i] < p1[i + 1] && i < argc - 1)
		i++;
	if (i >= argc - 2)
		return (1);
	return (0);
}

int	ft_rubiks(int *p1, int *p2, int argc, int len_p1)
{
	int	i;
	int	j;
	int	div;

	if (ft_isdone(p1, argc) == 1)
		return (len_p1);
	if (argc <= 7)
		return (ft_pushmini(p1, p2, argc, len_p1));
	div = 1;
	while (ft_isdone(p1, argc) == 0)
	{
		i = 0;
		j = argc - 1;
		while (i++ < j)
		{
			if ((p1[0] / div) % 2 == 0)
				len_p1 = push_b(p1, p2, argc, len_p1);
			else
				len_p1 = rotate_a(p1, argc, len_p1);
		}
		while (len_p1 < argc - 1)
			len_p1 = push_a(p1, p2, argc, len_p1);
		div = div * 2;
	}
	return (len_p1);
}
