# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mben-sal <mben-sal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 11:15:38 by mben-sal          #+#    #+#              #
#    Updated: 2022/11/15 17:56:40 by mben-sal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =   printf.a
HEADER = printf.h

SRC =   

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