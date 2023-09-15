NAME = libft.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_memmove.c ft_isalpha.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c
OBJS = ${SRCS:.c=.o}

all:	${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean: 
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
