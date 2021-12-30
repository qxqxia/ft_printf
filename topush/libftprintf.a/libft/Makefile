# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qxia <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 16:28:39 by qxia              #+#    #+#              #
#    Updated: 2021/12/13 10:20:10 by qxia             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_isalpha.c \
		ft_isdigit.c \
	   	ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_atoi.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

B_SRC = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \

OBJS = $(SRCS:.c=.o)

B_OBJS = $(B_SRC:.c=.o)


FLAGS = -Wall -Wextra -Werror

NAME = libft.a

%.o:	%.c
	clang $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)

bonus:	$(B_OBJS)
		ar rcs $(NAME) $(B_OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS) $(B_OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: all bonus clean fclean re
