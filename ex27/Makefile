# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eboris <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/04 17:25:37 by eboris            #+#    #+#              #
#    Updated: 2019/09/04 20:29:43 by eboris           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
FLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/file.c
OFILES = ft_putchar.o ft_putstr.o file.o

all: $(NAME)

$(NAME):
		gcc $(FLAGS) -c $(SRC) -I $(HEADERS)
		ar rc libft.a $(OFILES)
		gcc $(FLAGS) srcs/main.c $(SRC) -I $(HEADERS) -o $(NAME)
clean:
		rm -rf $(OFILES)
		rm -rf libft.a

fclean: clean
		@rm $(NAME)

re: fclean all
