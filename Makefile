# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 16:46:02 by rnoriko           #+#    #+#              #
#    Updated: 2021/10/28 11:28:55 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror -c
CC = clang
HEADER = ft_printf.h

SRCS =	add_prefix.c check_spec_types.c convert_idc.c convert_xpuo.c ft_printf.c\
		get_format_arg.c print_right_left.c print_zero.c

OBJS	= $(SRCS:.c=.o)

$(NAME):$(OBJS) $(HEADER)
	$(MAKE) all -C ./libft
	cp $(LIBFT) $(NAME)
	$(CC) $(CFLAGS) $(SRCS)
	ar rc $(NAME) $(OBJS)

all : $(NAME)

bonus : all

clean :
	rm -f $(OBJS) $(OBJS_BONUS)
	$(MAKE) clean -C ./libft

fclean : clean
	rm -f $(NAME)
	$(MAKE) fclean -C ./libft

re : fclean all

.PHONY : all clean bonus fclean re