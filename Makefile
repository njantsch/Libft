
CFLAGS = -Wall -Werror -Wextra -O0
LDFLAGS = -L.
SOURCES = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr ft_tolower.c ft_toupper.c ft_substr.c
OBJECTS = $(SOURCES:.c=.o)
NAME = libft.a
.DEFAULT_GOAL := all

all : $(OBJECTS)

$(NAME) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

.PHONY: clean fclean
clean:
	@rm -f $(NAME) $(OBJECTS) core			# @ means it doesnt print it to the terminal


