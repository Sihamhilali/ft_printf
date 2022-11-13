# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: selhilal <selhilal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 13:40:11 by selhilal          #+#    #+#              #
#    Updated: 2022/11/13 17:58:28 by selhilal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc

FLAG = -Wall -Wextra -Werror


ARC = ar rc

SOURCE = ft_printf.c \
		ft_puthex.c \
		ft_putpercent.c \
		ft_putuint.c \
		ft_putstr.c\
		ft_putchar.c\
		ft_putint.c\

OBJECT = $(SOURCE %.c=%.o)

all : $(NAME)

$(NAME): $(OBJECT)
	$(ARC) $(NAME) $(OBJECT)
clean:
	rm -f $(OBJECT)

%.o : %.c ft_printf.h
	$(CC) $(FLAG) -o $@ -c $< 
fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean re

