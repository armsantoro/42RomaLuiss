# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asantoro <asantoro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/25 12:35:14 by asantoro          #+#    #+#              #
#    Updated: 2022/06/02 17:17:49 by asantoro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_print_tools.c ft_dec_to_ex.c ft_printf.c ft_putpointer.c ft_numbers.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)


all: $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean
	$(NAME)

.PHONY: all clean fclean re
