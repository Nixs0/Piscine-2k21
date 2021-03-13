NAME	= do-op
SRCS	= $(wildcard ./srcs/*.c)
OBJS	= ${SRCS:.c=.o}
INCL  	= includes
FOLDER 	= srcs

CC	= gcc
CFLAGS  = -Wall -Wextra -Werror
RM	= rm -f

.c.o :
			${CC} -I ${INCL} ${CFLAGS} -c $< -o ${<:.c=.o}

all:			${OBJS}
			${CC} -o ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:		fclean all


