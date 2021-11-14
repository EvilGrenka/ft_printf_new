# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 16:46:02 by rnoriko           #+#    #+#              #
#    Updated: 2021/11/14 16:16:17 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror -c
CC = clang
HEADER = ft_printf.h
HEADER_LIBFT = ./libft/libft.h

SRCS		=	add_prefix.c check_spec_types.c convert_idc.c convert_xpuo.c ft_printf.c\
				get_format_arg.c print_right_left.c print_zero.c

SRCS_LIBFT	=	./libft/ft_strdup.c  ./libft/ft_strlen.c ./libft/ft_strjoin.c ./libft/ft_itoa.c \
				./libft/ft_putchar.c ./libft/ft_isdigit.c ./libft/ft_strncmp.c

OBJS		= $(SRCS:.c=.o)

$(NAME):$(OBJS) $(HEADER) $(SRCS_LIBFT) $(HEADER_LIBFT)
	$(MAKE) all -C ./libft
	cp $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

all : $(NAME)

bonus : all

clean :
	rm -f $(OBJS)
	$(MAKE) clean -C ./libft

fclean : clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft

re : fclean all

.PHONY : all clean bonus fclean re