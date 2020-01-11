# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssamadi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/29 15:04:13 by ssamadi           #+#    #+#              #
#    Updated: 2019/12/30 12:31:51 by ssamadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c\
	  	my_fc_printf.c\
		my_flag_fc.c

OBJECTS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC)
				gcc $(FLAGS) -c $(SRC)
				ar rc $(NAME) $(OBJECTS)
				ranlib $(NAME)

clean:
	rm -fr $(OBJECTS)

fclean: clean
	rm -fr $(NAME)

re: fclean all 
