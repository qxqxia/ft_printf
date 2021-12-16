# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qxia <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 12:46:03 by qxia              #+#    #+#              #
#    Updated: 2021/12/14 12:02:22 by qxia             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c \

OBJS = $(SRCS: .c=.o)

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

%.o: %.c
	clang $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
