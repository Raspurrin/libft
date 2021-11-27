# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:53:09 by jkaczmar          #+#    #+#              #
#    Updated: 2021/11/27 19:31:46 by mialbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
CC = gcc
#SRCS := $(shell find . -iname "ft_*.c")
TESTS := $(shell find ../tests -iname "test_*.c")
SRCS = ft_memmove.c ft_strjoin.c ft_isalnum.c ft_isdigit.c ft_substr.c ft_lstsize.c ft_memchr.c \
ft_itoa.c ft_isspace.c ft_memcmp.c ft_strchr.c ft_strlcat.c ft_calloc.c ft_putstr_fd.c ft_intlen.c \
ft_strtrim.c ft_tolower.c ft_memcpy.c ft_putendl_fd.c ft_strnstr.c ft_lstadd_front.c ft_putchar_fd.c \
ft_toupper.c ft_memset.c ft_strncmp.c ft_lstiter.c ft_split2.c ft_realloc.c ft_isprint.c ft_isalpha.c \
ft_lstadd_back.c ft_lstdelone.c ft_pow.c ft_strdup.c ft_putnbr_fd.c ft_bzero.c ft_lstclear.c ft_atoi.c \
ft_lstnew.c ft_wcount.c ft_strrchr.c ft_strmapi.c ft_lstmap.c ft_isascii.c ft_strtrim2.c ft_strlcpy.c \
ft_split.c ft_strlen.c
OBJS = $(SRCS:.c=.o)
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $(OBJS) -I .
	ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

#test_all :
#	$(CC) $(CFLAGS) $(TESTS) $(NAME) && ./a.out && norminette

# %.o: %.c
# 	$(CC) $(CFLAGS) -o $@ -c $< -I .

#	@echo "$(OBJS) removed"

#	@echo "$(NAME) removed"

#TESTS := $(shell find . -iname "test_*.c")

#tests_all:
#	$(CC) $(CFLAGS) $(TESTS) $(NAME) -lbsd && ./a.out

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

# find . -type f -iname "ft_*.c" | cut -d "/" -f 3 | tr '\n' ' '