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

int	rotate_a(int *p1, int argc, int len_p1)
{
	int	save;
	int	i;

	i = 0;
	save = p1[i];
	if (len_p1 == 0 || len_p1 == 1)
		return (len_p1);
	while (i != argc)
	{
		p1[i] = p1[i + 1];
		i++;
	}
	p1[len_p1 - 1] = save;
	write (1, "ra\n", 3);
	return (len_p1);
}

int	rotate_b(int *p2, int argc, int len_p1)
{
	int	save;
	int	i;

	i = 0;
	save = p2[i];
	if (len_p1 == argc || len_p1 == (argc - 1))
		return (len_p1);
	while (i != argc)
	{
		p2[i] = p2[i + 1];
		i++;
	}
	p2[argc - len_p1 - 2] = save;
	write (1, "rb\n", 3);
	return (len_p1);
}

int	rotate_rotate(int *p1, int *p2, int argc, int len_p1)
{
	int	save;
	int	i;

	i = 0;
	save = p1[i];
	if (len_p1 != 0 && len_p1 != 1)
	{
		while (i != argc)
		{
			p1[i] = p1[i + 1];
			i++;
		}
		p1[len_p1 + 1] = save;
	}
	save = p2[0];
	if (len_p1 == argc || len_p1 == (argc - 1))
		return (len_p1);
	i = -1;
	while (++i != argc)
		p2[i] = p2[i + 1];
	p2[argc - len_p1 + 1] = save;
	write (1, "rr\n", 3);
	return (len_p1);
}
