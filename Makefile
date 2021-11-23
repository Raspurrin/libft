CFLAGS := -Wall -Wextra -Werror
CC := gcc
SRCS := $(shell find . -iname "ft_*.c")
TESTS := $(shell find . -iname "test_*.c")
OBJS := $(SRCS:.c=.o)
NAME := libft.a

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $< -I .

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

tests_all:

	$(CC) $(CFLAGS) $(TESTS) $(NAME) -lbsd && ./a.out

clean: 
	@rm -f $(OBJS)
	@echo "$(OBJS) removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean


#ft_%:
#	$(CC) $(CFLAGS) sources/$@.c tests/test_$@.c libft.a -lbsd -o $@.o && ./$@.o

#$(SRCS):
#	$(CC) $(CFLAGS) sources/$@.c tests/test_$@.c libft.a -lbsd && ./a.out

#tests_all:
#	$(CC) $(CFLAGS) sources/ft_atoi.c tests/test_ft_atoi.c libft.a -lbsd -o ft_atoi.o && ./ft_atoi.o
#	$(CC) $(CFLAGS) sources/ft_bzero.c tests/test_ft_bzero.c libft.a -lbsd - o ft_bzero.o && ./ft_bzero.o
#	$(CC) $(CFLAGS) sources/ft_calloc.c tests/test_ft_calloc.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_intlen.c tests/test_ft_intlen.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_isalnum.c tests/test_ft_isalnum.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_isalpha.c tests/test_ft_isalpha.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_isascii.c tests/test_ft_isascii.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_isdigit.c tests/test_ft_isdigit.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_isprint.c tests/test_isprint.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_isspace.c tests/test_ft_isspace.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_itoa.c tests/test_ft_itoa.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_memchr.c tests/test_ft_memchr.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_memcmp.c tests/test_ft_memcmp.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_memcpy.c tests/test_ft_memcpy.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_memmove.c tests/test_ft_memmove.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_memset.c tests/test_ft_memset.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_pow.c tests/test_ft_pow.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_putchar_fd.c tests/test_ft_putendl_fd.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_pustr_fd.c tests/test_ft_putstr_fd.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_realloc.c tests/test_ft_realloc.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_split.c tests/test_ft_split.c libft.a -lbsd && ./a.out

#	$(CC) $(CFLAGS) sources/ft_memcpy.c tests/test_ft_memcpy.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_memmove.c tests/test_ft_memmove.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_memset.c tests/test_ft_memset.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_pow.c tests/test_ft_pow.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_putchar_fd.c tests/test_ft_putendl_fd.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_pustr_fd.c tests/test_ft_putstr_fd.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_realloc.c tests/test_ft_realloc.c libft.a -lbsd && ./a.out
#	$(CC) $(CFLAGS) sources/ft_split.c tests/test_ft_split.c libft.a -lbsd && ./a.out