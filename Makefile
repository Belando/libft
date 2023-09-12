NAME = libft.a
SRCS = ft_isalpha.c
DEPS = libft.h
OBJS = ${SRC: .c =.o}
FLAGS = -Wall -Wextra -Werror

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} -Iincludes ${FLAGS}

clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean
