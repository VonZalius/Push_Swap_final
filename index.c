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

void	ft_index_again(int *p1, int argc, int *pcopy, int min)
{
	int			k;
	static int	index;

	index++;
	k = 0;
	while (k != argc)
	{
		if (p1[k] == min)
		{
			pcopy[k] = index;
			index++;
			break ;
		}
		k++;
	}
}

int	*ft_index_bis(int *p1, int argc, int min, int max)
{
	int	index;
	int	pcopy[999999];
	int	upmin;
	int	k;

	index = 0;
	while (index <= argc)
	{
		ft_index_again(p1, argc, pcopy, min);
		index++;
		k = 0;
		upmin = max;
		while (k != argc)
		{
			if (p1[k] > min && p1[k] <= upmin)
				upmin = p1[k];
			k++;
		}
		min = upmin;
	}
	p1 = pcopy;
	return (p1);
}

int	*ft_index(int *p1, int argc)
{
	int		k;
	int		min;
	int		max;

	k = 0;
	min = p1[0];
	max = p1[0];
	while (k != argc)
	{
		if (p1[k] < min)
			min = p1[k];
		if (p1[k] > max)
			max = p1[k];
		k++;
	}
	p1 = ft_index_bis(p1, argc, min, max);
	return (p1);
}
