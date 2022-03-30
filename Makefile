# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spyro <spyro@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/16 10:58:23 by asantoro          #+#    #+#              #
<<<<<<< HEAD
<<<<<<<< HEAD:School_42/libft/Makefile
#    Updated: 2022/03/30 18:56:20 by spyro            ###   ########.fr        #
========
#    Updated: 2022/03/17 11:28:47 by spyro            ###   ########.fr        #
>>>>>>>> 3ecadc915b1ca7305f35fe81b89ba37deefbf876:42_School/libft/Makefile
=======
#    Updated: 2022/03/28 19:48:00 by spyro            ###   ########.fr        #
>>>>>>> 3ecadc915b1ca7305f35fe81b89ba37deefbf876
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_strchr.c ft_tolower.c \
	ft_isprint.c ft_strlcat.c ft_toupper.c \
	ft_atoi.c ft_memchr.c ft_strlcpy.c \
	ft_bzero.c ft_memcmp.c ft_strlen.c ft_isalnum.c \
	ft_memcpy.c ft_strncmp.c ft_isalpha.c ft_memmove.c \
	ft_strnstr.c ft_isascii.c ft_memset.c ft_strrchr.c \
<<<<<<< HEAD
<<<<<<<< HEAD:School_42/libft/Makefile
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c
========
	ft_calloc.c ft_strdup.c
>>>>>>>> 3ecadc915b1ca7305f35fe81b89ba37deefbf876:42_School/libft/Makefile
=======
	ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c
>>>>>>> 3ecadc915b1ca7305f35fe81b89ba37deefbf876

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -f

CFLAG = -Wall -Werror -Wextra -I.

all = $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean $(NAME)
