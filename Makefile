
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beccka <beccka@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 01:01:44 by beccka            #+#    #+#              #
#    Updated: 2022/11/03 01:01:45 by beccka           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c 
			ft_memcpy.c ft_memmove.c ft_memset.c ft_strlcat.c ft_strlcpy.c ft_strlen.c
			ft_tolower.c ft_toupper.c ft_strrchr.c ft_strchr.c ft_strncmp.c ft_memchr.c

OBJS	=	$(SRCS:.c=.o)

CC	=	gcc
RM	=	rm -fr
CFLAGS	=	-Wall -Wextra -Werror -I.

Name	=	libft.a

all: $(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:		$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY: all clean fclean re