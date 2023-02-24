# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abarras <marvin@42lausanne.ch>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/28 14:49:07 by abarras           #+#    #+#              #
#    Updated: 2022/11/04 12:53:24 by abarras          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strncmp.c ft_toupper.c \
		  ft_atoi.c ft_isascii.c ft_memcpy.c ft_strjoin.c ft_strnstr.c \
		  ft_bzero.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strrchr.c \
		  ft_calloc.c ft_isprint.c ft_memset.c ft_strlcpy.c ft_substr.c \
		  ft_isalnum.c ft_memchr.c ft_strchr.c ft_strlen.c ft_tolower.c \
		  ft_putchar_fd.c ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c \
		  ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c ft_itoa.c
OBJS	= ${SRCS:.c=.o}

AR		= ar -rcs
CC		= gcc
FLAGS	= -Wall -Werror -Wextra

RM		= rm -f



all:		${NAME}

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

.c.o:		
			${CC} ${FLAGS} -c $< -o ${<:.c=.o}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
