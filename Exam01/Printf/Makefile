# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rneves-s <rneves-s@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/09 21:12:10 by rneves-s          #+#    #+#              #
#    Updated: 2023/01/23 22:02:45 by rneves-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS				=	ft_printf_arg.c ft_printf.c ft_put_hex.c ft_hex_to_str.c\
						ft_count_hex.c ft_put_pointer.c\
						Libft/ft_itoa.c Libft/ft_putchar.c Libft/ft_putnbr_u.c Libft/ft_putnbr.c \
						Libft/ft_putstr.c Libft/ft_strchr.c Libft/ft_strlen.c Libft/ft_utoa.c

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