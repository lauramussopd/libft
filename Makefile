# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laurmuss <laurmuss@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/15 18:19:36 by laurmuss          #+#    #+#              #
#    Updated: 2023/06/09 15:17:53 by laurmuss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	libft.a
HEADER	:=	libft.h
SRCS	:=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
			ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_tolower.c \
			ft_toupper.c ft_memmove.c ft_strlcpy.c ft_atoi.c ft_strnstr.c \
			ft_strcpy.c ft_memchr.c ft_strlcat.c ft_memcmp.c ft_calloc.c \
			ft_strdup.c ft_substr.c ft_strjoin.c ft_strjoin.c ft_strtrim.c ft_split.c

OBJS	:=	${SRCS:.c=.o}
CC		:=	gcc
CFLAGS	:=	-Wall -Werror -Wextra
AR		:=	ar rcs
INCLUDE	:=	libft.h Makefile
RM		:=	rm -f
MODE	:=	normal

#Metodo implicito
%.o: %.c ${INCLUDE}
	${CC} -c ${CFLAGS} $< -o $@

#Mis metodos
all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${OBJS}
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
