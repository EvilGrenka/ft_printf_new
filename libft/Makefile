# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rnoriko <rnoriko@student.21-school.ru>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 16:27:05 by rnoriko           #+#    #+#              #
#    Updated: 2021/10/28 11:26:49 by rnoriko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

INC				=	libft.h

SRCS			=	ft_strdup.c  ft_strlen.c ft_strjoin.c ft_itoa.c \
					ft_putchar.c ft_isdigit.c ft_strncmp.c

HEADER			=	libft.h

OBJS			= $(SRCS:.c=.o)

CC				= clang
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -c

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS) $(INC) $(HEADER)
				$(CC) $(CFLAGS) $(SRCS)
				ar rc $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re