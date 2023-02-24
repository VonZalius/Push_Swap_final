SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

NAME = push_swap

all: ${NAME}

push_swap: *.o ft_printf/libftprintf.a
	$(CC) -o $@ $^

%.o: %.c
	$(CC) -c $(CFLAGS) $?

ft_printf/libftprintf.a:
	@make -C ft_printf

clean:
	rm -f $(OBJECTS)
	@make -C ft_printf clean

fclean: clean
	rm -f push_swap ft_printf/libftprintf.a

re: fclean all

.PHONY: all bonus clean fclean re
