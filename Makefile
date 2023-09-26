NAME = libft.a
GCC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strmapi.c ft_itoa.c ft_split.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putchar_fd.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_atoi.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_isalpha.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c
SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c
OBJS = $(SRCS:.c=.o)
OBJS_B = $(SRCS_B:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS_B)
	ar rcs $(NAME) $(OBJS_B)

clean: 
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean