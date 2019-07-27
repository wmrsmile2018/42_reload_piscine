# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bannabel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 16:11:47 by bannabel          #+#    #+#              #
#    Updated: 2019/04/02 16:11:50 by bannabel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = srcs/ft_putchar.c  srcs/ft_putstr.c    srcs/ft_strcmp.c    srcs/ft_strlen.c    srcs/ft_swap.c
OBJECTS = ft_putchar.o  ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
NAME = libft.a
all: $(NAME)
$(NAME):
	    gcc -c $(SOURCE) -Iincludes
		ar rc $(NAME) $(OBJECTS)
		ranlib $(NAME)
clean:
	    rm -f $(OBJECTS)
fclean:
	    rm -f $(NAME)
re: fclean all
