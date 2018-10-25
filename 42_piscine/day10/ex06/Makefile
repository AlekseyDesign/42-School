# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsprigga <jsprigga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/04 15:58:43 by jsprigga          #+#    #+#              #
#    Updated: 2018/09/04 22:42:58 by jsprigga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

OUT = do_op.o operators.o support.o

INCLUDES = includes/

all: $(NAME)

$(NAME): $(OUT)
	gcc -Wall -Wextra -Werror $(OUT) -o $(NAME)

do_op.o: do_op.c
	gcc -Wall -Wextra -Werror -c do_op.c -I$(INCLUDES)

operators.o: operators.c
	gcc -Wall -Wextra -Werror -c operators.c -I$(INCLUDES)

support.o: support.c
	gcc -Wall -Wextra -Werror -c support.c -I$(INCLUDES)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
