# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: snechaev <snechaev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/20 11:01:28 by snechaev          #+#    #+#              #
#    Updated: 2019/04/25 16:15:43 by snechaev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit
OBJS = main.o\
		board_utilits.o\
		read_file.o\
		tetr_operation.o\
		tetrimino.o\
		solve.o\
		libft/libft.a\

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS) : fillit.h

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re: fclean all
