# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beccka <beccka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 21:12:10 by rneves-s          #+#    #+#              #
#    Updated: 2023/01/19 00:29:42 by beccka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS				=	ft_itoa.c ft_printf_arg.c ft_printf.c \
						ft_putchar.c ft_putnbr_u.c ft_putnbr.c ft_put_hex.c\
						ft_putstr.c ft_strchr.c ft_strlen.c ft_utoa.c

OBJS				=	$(SRCS:.c=.o)

CC					= gcc
RM					= rm -f
CFLAGS				= -Wall -Wextra -Werror -I.

NAME				= libftprintf.a

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rcs $(NAME) $(OBJS)

clean:				
					$(RM) $(OBJS)

fclean:				clean
					$(RM) $(NAME)

re:					fclean $(NAME)

.PHONY:			all clean fclean re