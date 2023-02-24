/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:08:47 by abarras           #+#    #+#             */
/*   Updated: 2022/11/10 14:12:56 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "ft_printf/libft/libft.h"

/*---------- Fonctions PUSHSWAP ----------*/

int	ft_pushswap(int argc, char **argv);
int	ft_error(int argc, char **argv);
int	ft_pushmini(int *p1, int *p2, int argc, int len_p1);
int	ft_minifive(int *p1, int *p2, int argc, int len_p1);
int	ft_minithird(int *p1, int argc, int len_p1);
int	ft_rubiks(int *p1, int *p2, int argc, int len_p1);
int	*ft_index(int *p1, int argc);
int	ft_isdone(int *p1, int argc);
int	swap_a(int *p1, int len_p1);
int	swap_b(int *p2, int argc, int len_p1);
int	swap_swap(int *p1, int *p2, int argc, int len_p1);
int	push_a(int *p1, int *p2, int argc, int len_p1);
int	push_b(int *p1, int *p2, int argc, int len_p1);
int	rotate_a(int *p1, int argc, int len_p1);
int	rotate_b(int *p2, int argc, int len_p1);
int	rotate_rotate(int *p1, int *p2, int argc, int len_p1);
int	reverse_a(int *p1, int argc, int len_p1);
int	reverse_b(int *p2, int argc, int len_p1);
int	reverse_reverse(int *p1, int *p2, int argc, int len_p1);

#endif
