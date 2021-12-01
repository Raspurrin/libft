# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:53:09 by jkaczmar          #+#    #+#              #
#    Updated: 2021/12/01 15:59:05 by mialbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
CC = gcc
#SRCS := $(shell find . -iname "ft_*.c")
TESTS := $(shell find ../tests -iname "test_*.c")
SRCS = ft_memmove.c ft_strjoin.c ft_isalnum.c ft_isdigit.c ft_substr.c ft_memchr.c \
ft_itoa.c ft_isspace.c ft_memcmp.c ft_strchr.c ft_strlcat.c ft_calloc.c ft_putstr_fd.c ft_intlen.c \
ft_strtrim.c ft_tolower.c ft_memcpy.c ft_putendl_fd.c ft_strnstr.c  ft_putchar_fd.c \
ft_toupper.c ft_memset.c ft_strncmp.c ft_striteri.c ft_realloc.c ft_isprint.c ft_isalpha.c \
ft_pow.c ft_strdup.c ft_putnbr_fd.c ft_bzero.c ft_atoi.c \
ft_wcount.c ft_strrchr.c ft_strmapi.c ft_isascii.c ft_strlcpy.c ft_abs.c\
ft_split.c ft_strlen.c
OBJS = $(SRCS:.c=.o)
BONUS_SRCS := ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstnew.c ft_lstsize.c ft_lstadd_front.c \
ft_lstmap.c ft_lstlast.c ft_lstiter.c
BONUS_OBJS := $(BONUS_SRCS:.c=.o)
# TEMP = $(shell find ../tests -iname "test_*.c" | cut -d '/' -f 3)
# TOBJS = $(TEMP:.c=.o)
# TNAME = test.a
NAME = libft.a
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus : $(BONUS_OBJS) $(OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	@rm -f $(OBJS) $(TOBJS) $(BONUS_OBJS)

fclean: clean
	@rm -f $(NAME) $(TNAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re

# test_all : all
# 	$(CC) $(CFLAGS) -c $(TESTS) -I .
# 	ar rcs $(TNAME) $(TOBJS)
# 	$(CC) $(CFLAGS) ../tests/test_all.c $(TNAME) $(NAME) && ./a.out
# 	norminette $(SRCS) $(HEADER)

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

# touch | find . -type f -iname "ft_*.c" | cut -d "/" -f 2 | tr '\n' ' '