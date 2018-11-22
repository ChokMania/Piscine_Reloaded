# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judumay <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/05 15:00:56 by judumay           #+#    #+#              #
#    Updated: 2018/11/05 15:00:57 by judumay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
	  srcs/ft_swap.c
HEADER = includes/

all: $(NAME)

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC) -I $(HEADER)
	@ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	@ranlib $(NAME)
clean :
	@rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

fclean : clean
	@rm -f $(NAME)

re: fclean all
