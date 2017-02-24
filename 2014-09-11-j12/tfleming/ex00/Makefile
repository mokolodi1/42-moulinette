#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfleming <tfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/11 14:39:14 by tfleming          #+#    #+#              #
#    Updated: 2014/09/11 14:43:15 by tfleming         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file

SRC = ft_display_file.c

OBJ = ft_display_file.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(SRC)
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

