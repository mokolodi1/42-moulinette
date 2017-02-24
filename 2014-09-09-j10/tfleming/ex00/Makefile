#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 10:26:35 by tfleming          #+#    #+#              #
#    Updated: 2014/09/09 12:26:55 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC_FLD = srcs
SRC = $(SRC_FLD)/ft_putchar.c	\
	$(SRC_FLD)/ft_putstr.c		\
	$(SRC_FLD)/ft_strcmp.c		\
	$(SRC_FLD)/ft_strlen.c		\
	$(SRC_FLD)/ft_swap.c

OBJ = ft_putchar.o				\
	ft_putstr.o					\
	ft_strcmp.o					\
	ft_strlen.o					\
	ft_swap.o

INC_FLD = includes
INC = $(INC_FLD)/ft_lib.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC) $(INC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
