# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkaruk-m <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/20 11:55:25 by jkaruk-m          #+#    #+#              #
#    Updated: 2021/02/20 12:10:26 by jkaruk-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= $(addprefix ${FOLDER}/, ft_putchar.c ft_strlen.c ft_swap.c ft_putstr.c ft_strcmp.c)
OBJS	= ${SRCS:.c=.o}
HEADER  = includes
FOLDER 	= srcs

CC		= gcc
CFLAGS  = -Wall -Wextra -Werror
RM		= rm -f

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all:		${NAME}

%.o: %.c
			${CC} -c ${CFLAGS} -o $@ $< -I ${HEADER}


clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} libft.a

re:			fclean all
