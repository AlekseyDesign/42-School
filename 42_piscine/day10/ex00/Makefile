# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 14:02:48 by jsprigga          #+#    #+#              #
#    Updated: 2018/09/04 18:51:49 by jsprigga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ./srcs/

INCLUDES = -I./includes/

FLAGS = -Wall -Wextra -Werror

all: libft.a

libft.a: ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ar -rc $(NAME) *.o

ft_putchar.o: $(SRCS)ft_putchar.c
	gcc $(FLAGS) -c $(SRCS)ft_putchar.c $(INCLUDES)

ft_putstr.o: $(SRCS)ft_putstr.c
	gcc $(FLAGS) -c $(SRCS)ft_putstr.c $(INCLUDES)

ft_strcmp.o: $(SRCS)ft_strcmp.c
	gcc $(FLAGS) -c $(SRCS)ft_strcmp.c $(INCLUDES)

ft_strlen.o: $(SRCS)ft_strlen.c
	gcc $(FLAGS) -c $(SRCS)ft_strlen.c $(INCLUDES)

ft_swap.o: $(SRCS)ft_swap.c
	gcc $(FLAGS) -c $(SRCS)ft_swap.c $(INCLUDES)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
