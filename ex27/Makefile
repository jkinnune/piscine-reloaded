# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkinnune <jkinnune@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 10:57:25 by jkinnune          #+#    #+#              #
#    Updated: 2021/11/02 10:57:59 by jkinnune         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ./srcs/main.c
HD = ./includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra $(SRC) -o ft_display_file

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)
	rm -f includes/*.*.gch

re: fclean all