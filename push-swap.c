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

void	ft_pushswap_bis(int *p1, int *p2, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i != argc)
	{
		p1[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	p1[i] = 0;
	i = 0;
	while (i != argc)
	{
		p2[i] = 0;
		i++;
	}
}

int	ft_pushswap(int argc, char **argv)
{
	int	i;
	int	*p1;
	int	*p2;
	int	len_p1;
	int	*bis;

	p1 = malloc(sizeof(int) * argc + 1);
	p2 = malloc(sizeof(int) * argc + 1);
	if (!p1 || !p2)
		return (0);
	ft_pushswap_bis(p1, p2, argc, argv);
	len_p1 = argc - 1;
	if (argc > 7)
	{
		bis = ft_index(p1, argc);
		i = -1;
		while (++i < argc)
			p1[i] = bis[i];
	}
	len_p1 = ft_rubiks(p1, p2, argc, len_p1);
	free (p1);
	free (p2);
	return (0);
}

int	ft_count(char *argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[j] != '\0')
	{
		if (argv[j] == ' ')
			i++;
		j++;
	}
	return (i + 1);
}

int	main(int argc, char	**argv)
{
	if (argc == 2)
	{
		argc = ft_count(argv[1]) + 1;
		if (argc != 2)
		{
			argv[1] = ft_strjoin("test ", argv[1]);
			argv = ft_split(argv[1], ' ');
		}
	}
	if (ft_error(argc, argv) == 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (ft_pushswap(argc, argv));
}
