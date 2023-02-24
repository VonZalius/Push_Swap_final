/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:08:47 by abarras           #+#    #+#             */
/*   Updated: 2022/11/10 14:12:56 by abarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

/*---------- Fonctions Printf ----------*/
int		ft_checkv_printf(const char *str, int i);

int		ft_printf(const char *str, ...);

int		*ft_allv_printf(const char *str);

int		ft_print_hex(unsigned int num, const char format);

char	*ft_tostrupper(char *str);

int		ft_putchar_printf(char c, int fd);

int		ft_putstr_printf(char *s, int fd);

int		ft_putnbr_printf(int n, int fd);

int		ft_unsigned_putnbr_fd(unsigned int n, int fd);

int		ft_print_p_hex(unsigned long long num);
#endif
