# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 12:31:11 by kuzyilma          #+#    #+#              #
#    Updated: 2024/02/15 10:08:59 by kuzyilma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJS = $(patsubst %.c, %.o, $(SRCS))
LIBS = ft.h
CFLAGS = -Wall -Wextra -Werror
CC = cc

all:	libft.a

$(OBJS):	%.o:	%.c
	$(CC)	$(CFLAGS)	-c	$<	-I	$(LIBS)	-o	$@

libft.a:	$(OBJS)	$(LIBS)
	ar	rc	libft.a $(OBJS)	

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f libft.a 

re: fclean all

