# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skarim <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 16:58:54 by skarim            #+#    #+#              #
#    Updated: 2023/11/15 11:59:06 by skarim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror 
srcs = ft_printf.c ft_putchar.c ft_putdec.c ft_putstr.c ft_putadress.c ft_puthex.c ft_putuns.c ft_puthexup.c
objs = $(srcs:.c=.o)
NAME = libftprintf.a
ar = ar -rc
header = ft_printf.h

all: $(NAME)

%.o: %.c $(header)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(objs)
	$(ar) $(NAME) $(objs)

clean:
	rm -rf $(objs)

fclean: clean
	rm -rf $(NAME)

re: fclean all