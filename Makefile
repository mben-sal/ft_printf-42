# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 11:15:38 by mben-sal          #+#    #+#              #
#    Updated: 2022/11/19 13:59:40 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   libftprintf.a

HEADER = ft_printf.h

SRC =	ft_pointer.c\
		ft_printf.c\
		ft_putchar.c\
		ft_puthex.c\
		ft_putnbr.c\
		ft_putnbu.c\
		ft_putstr.c

OBJ =    $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
			$(CC) $(CFLAGS) -c $(SRC)
			ar -rc $(NAME) $(OBJ)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all