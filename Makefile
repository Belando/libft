NAME = libft.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_isalpha.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c
OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean