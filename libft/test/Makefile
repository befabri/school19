# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfabri <bfabri@student.s19.be>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/08 17:53:33 by frdescam          #+#    #+#              #
#    Updated: 2021/11/12 03:08:41 by bfabri           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= run_tests

SRCS		= \
		test_ft_isalpha.c \
		test_ft_isdigit.c \
		test_ft_isalnum.c \
		test_ft_isascii.c \
		test_ft_isprint.c \
		test_ft_strlen.c \
		test_ft_memset.c \
		test_ft_bzero.c \
		test_ft_memcpy.c \
		test_ft_memmove.c \
		test_ft_strlcpy.c \
		test_ft_strlcat.c \
		test_ft_toupper.c \
		test_ft_tolower.c \
		test_ft_strchr.c \
		test_ft_strrchr.c \
		test_ft_strncmp.c \
		test_ft_memchr.c \
		test_ft_memcmp.c \
		test_ft_strnstr.c \
		test_ft_atoi.c \
		test_ft_calloc.c \
		test_ft_strdup.c \
		test_ft_substr.c \
		test_ft_strjoin.c \
		test_ft_strtrim.c \
		test_ft_split.c \
		test_ft_itoa.c \
		test_ft_strmapi.c \
		test_ft_striteri.c \
		test_ft_putchar_fd.c \
		test_ft_putstr_fd.c \
		test_ft_putendl_fd.c \
		test_ft_putnbr_fd.c \
		main.c

OBJS		= ${SRCS:.c=.o}

CC			= cc
RM			= rm -f

LIBFT_FLAGS	= -Llibft -lft

CFLAGS	=	-Wall -Wextra -fsanitize=address

LIBFT		=	../src/libft.a

all			:	$(NAME)

$(NAME)		:	$(OBJS) $(LIBFT)
				$(CC) $(CFLAGS) $(OBJS) -o $(NAME) $(LIBFT) -lbsd

$(LIBFT)	:
				make -C ../src

clean		:
				rm -rf $(OBJS)
				make clean -C ../src

fclean		:	clean
				rm $(NAME)
				make fclean -C ../src

re			:	fclean all
