/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:33:56 by abarras           #+#    #+#             */
/*   Updated: 2023/01/11 11:33:59 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	swap_a(int *p1, int len_p1)
{
	int	save;

	if (len_p1 == 1 || len_p1 == 0)
		return (len_p1);
	save = p1[0];
	p1[0] = p1[1];
	p1[1] = save;
	write (1, "sa\n", 3);
	return (len_p1);
}

int	swap_b(int *p2, int argc, int len_p1)
{
	int	save;

	if (len_p1 == argc || len_p1 == (argc - 1))
		return (len_p1);
	save = p2[0];
	p2[0] = p2[1];
	p2[1] = save;
	write (1, "sb\n", 3);
	return (len_p1);
}

int	swap_swap(int *p1, int *p2, int argc, int len_p1)
{
	int	save;

	if (len_p1 != 1 && len_p1 != 0)
	{
		save = p1[0];
		p1[0] = p1[1];
		p1[1] = save;
	}
	if (len_p1 == argc || len_p1 == (argc - 1))
		return (len_p1);
	save = p2[0];
	p2[0] = p2[1];
	p2[1] = save;
	write (1, "ss\n", 3);
	return (len_p1);
}

int	push_a(int *p1, int *p2, int argc, int len_p1)
{
	int	save1;
	int	save2;
	int	i;

	i = 0;
	save2 = p2[0];
	if (len_p1 == argc)
		return (len_p1);
	while (i != argc)
	{
		save1 = p1[i];
		p1[i] = save2;
		save2 = save1;
		i++;
	}
	i = 0;
	while (i != argc)
	{
		p2[i] = p2[i + 1];
		i++;
	}
	write (1, "pa\n", 3);
	return (len_p1 + 1);
}

int	push_b(int *p1, int *p2, int argc, int len_p1)
{
	int	save1;
	int	save2;
	int	i;

	i = 0;
	save2 = p1[0];
	if (len_p1 == 0)
		return (len_p1);
	while (i != argc)
	{
		save1 = p2[i];
		p2[i] = save2;
		save2 = save1;
		i++;
	}
	i = 0;
	while (i != argc)
	{
		p1[i] = p1[i + 1];
		i++;
	}
	write (1, "pb\n", 3);
	return (len_p1 - 1);
}
