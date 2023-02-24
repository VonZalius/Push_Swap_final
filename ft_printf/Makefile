# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 14:49:07 by abarras           #+#    #+#              #
#    Updated: 2022/11/10 13:53:01 by abarras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_va_printf.c ft_tohexa_printf.c ft_tohexa_p_printf.c \
		  ft_putchar_len.c ft_unsigned_putnbr_fd.c ft_putnbr_printf.c \
			ft_putstr_printf.c

OBJS	= ${SRCS:.c=.o}

LIBFT	= libft

AR		= ar -rcs
CC		= gcc
FLAGS	= -Wall -Werror -Wextra

RM		= rm -f



all:		${NAME}

${NAME}:	${OBJS}
			@make -C $(LIBFT)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			ar rcs ${NAME} ${OBJS}

.c.o:
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS}
			@make clean -C $(LIBFT)

fclean:		clean
			${RM} ${NAME}
			@$(RM) -f $(LIBFT)/libft.a

re:			fclean all

.PHONY:		all clean fclean re
