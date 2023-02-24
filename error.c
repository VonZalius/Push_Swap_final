/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 11:33:56 by abarras           #+#    #+#             */
/*   Updated: 2023/01/11 11:33:59 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

//2147483647

static int	ft_min(char *argv)
{
	char	a;

	if (argv[0] != '-')
		return (101);
	if (ft_strlen(argv) > 11)
		return (0);
	else if (ft_strlen(argv) < 11)
		return (101);
	else
	{
		a = argv[6];
		argv[6] = '\0';
		if (ft_atoi(argv + 1) > 21474)
			return (0);
		else if (ft_atoi(argv + 1) == 21474)
		{
			argv[6] = a;
			if (ft_atoi(argv + 6) > 83648)
				return (0);
		}
		argv[6] = a;
	}
	return (101);
}

static int	ft_max(char *argv)
{
	char	a;

	if (argv[0] == '-')
		return (101);
	if (ft_strlen(argv) > 10)
		return (0);
	else if (ft_strlen(argv) < 10)
		return (101);
	else
	{
		a = argv[5];
		argv[5] = '\0';
		if (ft_atoi(argv) > 21474)
			return (0);
		else if (ft_atoi(argv) == 21474)
		{
			argv[5] = a;
			if (ft_atoi(argv + 5) > 83647)
				return (0);
		}
		argv[5] = a;
	}
	return (101);
}

static int	ft_doublon(int argc, char **argv)
{
	int	i;
	int	j;
	int	test;
	int	save;

	i = 1;
	test = 0;
	while (i < argc)
	{
		save = ft_atoi(argv[i]);
		j = i + 1;
		while (j < argc)
		{
			if (save == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (101);
}

int	ft_error(int argc, char **argv)
{
	int				i;
	unsigned int	j;

	i = 1;
	while (i != argc)
	{
		j = 0;
		while (j < ft_strlen(argv[i]))
		{
			if (argv[i][j] == '-' && j == 0)
				j++;
			if (ft_isdigit(argv[i][j]) == 0)
				return (0);
			j++;
		}
		if (ft_max(argv[i]) == 0 || ft_min(argv[i]) == 0
			|| ft_doublon(argc, argv) == 0)
			return (0);
		i++;
	}
	return (101);
}
