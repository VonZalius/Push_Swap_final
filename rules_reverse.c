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

int	reverse_a(int *p1, int argc, int len_p1)
{
	int	save1;
	int	save2;
	int	i;

	i = 0;
	save2 = p1[len_p1 - 1];
	if (len_p1 == 0 || len_p1 == 1)
		return (len_p1);
	while (i != argc)
	{
		save1 = p1[i];
		p1[i] = save2;
		save2 = save1;
		i++;
	}
	write (1, "rra\n", 4);
	return (len_p1);
}

int	reverse_b(int *p2, int argc, int len_p1)
{
	int	save1;
	int	save2;
	int	i;

	i = 0;
	save2 = p2[argc - len_p1 - 1];
	if (len_p1 == argc || len_p1 == argc - 1)
		return (len_p1);
	while (i != argc)
	{
		save1 = p2[i];
		p2[i] = save2;
		save2 = save1;
		i++;
	}
	write (1, "rrb\n", 4);
	return (len_p1);
}

void	reverse_reverse_bis(int argc, int save1, int save2, int *p1)
{
	int	i;

	i = 0;
	while (i != argc)
	{
		save1 = p1[i];
		p1[i] = save2;
		save2 = save1;
		i++;
	}
}

int	reverse_reverse(int *p1, int *p2, int argc, int len_p1)
{
	int	save1;
	int	save2;
	int	i;

	i = 0;
	save1 = 0;
	save2 = p1[len_p1 - 1];
	if (len_p1 != 0 && len_p1 != 1)
		reverse_reverse_bis(argc, save1, save2, p1);
	i = 0;
	save2 = p2[argc - len_p1 - 1];
	if (len_p1 == argc)
		return (len_p1);
	while (i != argc)
	{
		save1 = p2[i];
		p2[i] = save2;
		save2 = save1;
		i++;
	}
	write (1, "rrr\n", 4);
	return (len_p1);
}
