# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:53:09 by jkaczmar          #+#    #+#              #
#    Updated: 2021/12/02 00:45:31 by mialbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRCS = 			ft_memmove.c \
				ft_strjoin.c \
				ft_isalnum.c \
				ft_isdigit.c \
				ft_substr.c \
				ft_memchr.c \
				ft_itoa.c \
				ft_isspace.c \
				ft_memcmp.c \
				ft_strchr.c \
				ft_strlcat.c \
				ft_calloc.c \
				ft_putstr_fd.c \
				ft_intlen.c \
				ft_strtrim.c \
				ft_tolower.c \
				ft_memcpy.c \
				ft_putendl_fd.c \
				ft_strnstr.c \
				ft_putchar_fd.c \
				ft_toupper.c \
				ft_memset.c \
				ft_strncmp.c \
				ft_striteri.c \
				ft_realloc.c \
				ft_isprint.c \
				ft_isalpha.c \
				ft_pow.c \
				ft_strdup.c \
				ft_putnbr_fd.c \
				ft_bzero.c \
				ft_atoi.c \
				ft_wcount.c \
				ft_strrchr.c \
				ft_strmapi.c \
				ft_isascii.c \
				ft_strlcpy.c \
				ft_abs.c \
				ft_split.c \
				ft_strlen.c
BONUS_SRCS := 	ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_lstadd_front.c \
				ft_lstmap.c \
				ft_lstlast.c \
				ft_lstiter.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS := $(BONUS_SRCS:.c=.o)

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
