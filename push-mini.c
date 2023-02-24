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

int	ft_miniup_bis(int *p1, int *p2, int argc, int len_p1)
{
	int	j;
	int	k;
	int	save;
	int	i;

	i = 0;
	j = argc - 1;
	while (i < j - 1)
	{
		k = 0;
		save = p2[0];
		while (k < argc - len_p1 - 1)
		{
			if (p2[k] > save)
				save = p2[k];
			k++;
		}
		while (p2[0] != save || len_p1 == j)
			len_p1 = rotate_b(p2, argc, len_p1);
		len_p1 = push_a(p1, p2, argc, len_p1);
		i++;
	}
	return (len_p1);
}

int	ft_miniup(int *p1, int *p2, int argc, int len_p1)
{
	int	i;
	int	save;

	i = 1;
	save = p1[0];
	while (i < len_p1)
	{
		if (p1[i] > save)
			save = p1[i];
		i++;
	}
	while (i > 0)
	{
		if (p1[0] != save)
			len_p1 = push_b(p1, p2, argc, len_p1);
		else if (p1[0] == save)
			len_p1 = rotate_a(p1, argc, len_p1);
		i--;
	}
	len_p1 = ft_miniup_bis(p1, p2, argc, len_p1);
	return (len_p1);
}

int	ft_minithird(int *p1, int argc, int len_p1)
{
	if (p1[0] < p1[1] && p1[0] < p1[2] && p1[1] > p1[2])
	{
		len_p1 = reverse_a(p1, argc, len_p1);
		len_p1 = swap_a(p1, len_p1);
	}
	else if (p1[1] < p1[0] && p1[1] < p1[2] && p1[2] > p1[0])
		len_p1 = swap_a(p1, len_p1);
	else if (p1[1] < p1[0] && p1[1] < p1[2] && p1[0] > p1[2])
		len_p1 = rotate_a(p1, argc, len_p1);
	else if (p1[2] < p1[0] && p1[2] < p1[1] && p1[1] > p1[0])
		len_p1 = reverse_a(p1, argc, len_p1);
	else if (p1[2] < p1[0] && p1[2] < p1[1] && p1[0] > p1[1])
	{
		len_p1 = swap_a(p1, len_p1);
		len_p1 = reverse_a(p1, argc, len_p1);
	}
	return (len_p1);
}

int	ft_pushmini(int *p1, int *p2, int argc, int len_p1)
{
	if (len_p1 == 1)
		return (len_p1);
	else if (len_p1 == 2)
	{
		if (p1[0] > p1[1])
			len_p1 = swap_a(p1, len_p1);
		return (len_p1);
	}
	else if (len_p1 == 3)
		return (ft_minithird(p1, argc, len_p1));
	else if (len_p1 == 5)
		return (ft_minifive(p1, p2, argc, len_p1));
	else
		return (ft_miniup(p1, p2, argc, len_p1));
	return (len_p1);
}
