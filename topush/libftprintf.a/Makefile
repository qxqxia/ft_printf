# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qxia <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 12:46:03 by qxia              #+#    #+#              #
#    Updated: 2021/12/30 14:06:48 by qxia             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./libft

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = -I./ft_printf.h

SRCS = ft_printf.c \
	   srcs/ft_printchar.c \
	   srcs/ft_printhex.c \
	   srcs/ft_printnbr.c \
	   srcs/ft_printpourcen.c \
	   srcs/ft_printptr.c \
	   srcs/ft_printstr.c \
	   srcs/ft_printunsignednbr.c \

SRCS_O = ft_printf.o \
		 ft_printchar.o \
		 ft_printhex.o \
		 ft_printnbr.o \
		 ft_printpourcen.o \
		 ft_printptr.o \
		 ft_printstr.o \
		 ft_printunsignednbr.o \

OBJS = $(SRCS: %.c = %.o)

$(NAME):$(OBJS)
		make -C $(LIBFT)
		cp libft/libft.a $(NAME)
		$(CC) $(FLAGS) $(INCLUDES) $(SRCS)
		ar -rc $(NAME) $(SRCS_O)

all: $(NAME)

clean:
		make clean -C $(LIBFT)
		rm -rf $(SRCS_O)

fclean: clean
		make fclean -C $(LIBFT)
		rm -rf $(NAME)	

re: fclean all

.PHONY: all clean fclean re
