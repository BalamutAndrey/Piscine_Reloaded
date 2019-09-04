# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboris <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 17:25:37 by eboris            #+#    #+#              #
#    Updated: 2019/09/04 19:53:28 by eboris           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/
SRC = srcs/main.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/file.c
FILES = 

all: $(NAME)

$(NAME):
		gcc $(FLAGS) $(SRC) -I $(HEADERS) -o $(NAME)
clean:
		rm -rf *.o

fclean: clean
		rm $(NAME)

re: fclean all
