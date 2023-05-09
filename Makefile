# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 10:35:20 by msimaozi          #+#    #+#              #
#    Updated: 2023/03/22 13:01:48 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
LIBFT = ./libft/libft.a

SRC = push_swap.c initial.c switch.c rotate.c rorotate.c push.c BIG_op.c utils.c sort.c sort_BIG.c organize_cp.c sorted.c erros.c
OBJ = $(SRC:.c=.o)

all: pushswap

pushswap: ${OBJ} ${LIBFT}
	${CC} ${CFLAGS} ${OBJ} ${LIBFT} -o $(NAME)

${LIBFT}:
		$(MAKE) -C ./libft
	
clean:
	$(MAKE) clean -C ./libft
	rm -rf *.o

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf *.a

ff: fclean clean
	$(MAKE) fclean -C ./libft
	$(MAKE) clean -C ./libft
	rm -rf *.a

re: fclean all

.SILENT: