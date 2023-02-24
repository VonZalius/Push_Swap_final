/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push-mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:33:56 by abarras           #+#    #+#             */
/*   Updated: 2023/01/11 11:33:59 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_minifive_third(int *p1, int *p2, int argc, int len_p1)
{
	len_p1 = reverse_a(p1, argc, len_p1);
	len_p1 = push_a(p1, p2, argc, len_p1);
	len_p1 = rotate_a(p1, argc, len_p1);
	len_p1 = rotate_a(p1, argc, len_p1);
}

int	ft_minifive_bis(int *p1, int *p2, int argc, int len_p1)
{
	if (p2[0] > p1[1] && p2[0] < p1[3])
	{
		if (p2[0] > p1[2])
			ft_minifive_third(p1, p2, argc, len_p1);
		else if (p2[0] < p1[2])
		{
			len_p1 = rotate_a(p1, argc, len_p1);
			len_p1 = push_a(p1, p2, argc, len_p1);
			len_p1 = swap_a(p1, len_p1);
			len_p1 = reverse_a(p1, argc, len_p1);
		}
	}
	else
	{
		len_p1 = push_a(p1, p2, argc, len_p1);
		if (p1[0] > p1[1] && p1[0] < p1[2])
			len_p1 = swap_a(p1, len_p1);
		else if (p1[0] > p1[4])
			len_p1 = rotate_a(p1, argc, len_p1);
	}
	return (len_p1);
}

int	ft_minifive(int *p1, int *p2, int argc, int len_p1)
{
	len_p1 = push_b(p1, p2, argc, len_p1);
	len_p1 = push_b(p1, p2, argc, len_p1);
	len_p1 = ft_minithird(p1, argc, len_p1);
	if (p2[0] > p1[1] && p2[0] < p1[2])
	{
		len_p1 = reverse_a(p1, argc, len_p1);
		len_p1 = push_a(p1, p2, argc, len_p1);
		len_p1 = rotate_a(p1, argc, len_p1);
		len_p1 = rotate_a(p1, argc, len_p1);
	}
	else
	{
		len_p1 = push_a(p1, p2, argc, len_p1);
		if (p1[0] > p1[3])
			len_p1 = rotate_a(p1, argc, len_p1);
		else if (p1[0] > p1[1] && p1[0] < p1[2])
			len_p1 = swap_a(p1, len_p1);
	}
	len_p1 = ft_minifive_bis(p1, p2, argc, len_p1);
	return (len_p1);
}
