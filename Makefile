# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 13:53:09 by jkaczmar          #+#    #+#              #
#    Updated: 2022/07/15 21:28:39 by mialbert         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRCS = 			./srcs/ft_memmove.c \
				./srcs/ft_strjoin.c \
				./srcs/ft_isalnum.c \
				./srcs/ft_isdigit.c \
				./srcs/ft_substr.c \
				./srcs/ft_memchr.c \
				./srcs/ft_itoa.c \
				./srcs/ft_isspace.c \
				./srcs/ft_memcmp.c \
				./srcs/ft_strchr.c \
				./srcs/ft_strlcat.c \
				./srcs/ft_calloc.c \
				./srcs/ft_putstr_fd.c \
				./srcs/ft_intlen.c \
				./srcs/ft_strtrim.c \
				./srcs/ft_tolower.c \
				./srcs/ft_memcpy.c \
				./srcs/ft_putendl_fd.c \
				./srcs/ft_strnstr.c \
				./srcs/ft_putchar_fd.c \
				./srcs/ft_toupper.c \
				./srcs/ft_memset.c \
				./srcs/ft_strncmp.c \
				./srcs/ft_striteri.c \
				./srcs/ft_realloc.c \
				./srcs/ft_isprint.c \
				./srcs/ft_isalpha.c \
				./srcs/ft_pow.c \
				./srcs/ft_strdup.c \
				./srcs/ft_putnbr_fd.c \
				./srcs/ft_bzero.c \
				./srcs/ft_atoi.c \
				./srcs/ft_wcount.c \
				./srcs/ft_strrchr.c \
				./srcs/ft_strmapi.c \
				./srcs/ft_isascii.c \
				./srcs/ft_strlcpy.c \
				./srcs/ft_abs.c \
				./srcs/ft_split.c \
				./srcs/ft_strlen.c \
				./srcs/get_next_line_utils.c \
				./srcs/get_next_line.c \
				./srcs/ft_atoll.c \
				./srcs/print_2d_fd.c \
				./srcs/free_2d_guard.c \
				./srcs/free_2d.c \
				./srcs/ft_hex_fd.c \
				./srcs/ft_uphex_fd.c \
				./srcs/ft_uputnbr_fd.c \
				./srcs/ft_putmem_fd.c \
				./srcs/ft_printf.c \
				./srcs/getncount.c 

BONUS_SRCS = 	./bonus/ft_lstadd_back.c \
				./bonus/ft_lstdelone.c \
				./bonus/ft_lstclear.c \
				./bonus/ft_lstnew.c \
				./bonus/ft_lstsize.c \
				./bonus/ft_lstadd_front.c \
				./bonus/ft_lstmap.c \
				./bonus/ft_lstlast.c \
				./bonus/ft_lstiter.c

B_RED	:= \033[1;31m
RED 	:= \033[0;31m
B_GREEN	:= \033[1;32m
GREEN	:= \033[0;32m
NC 		:= \033[0m

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@echo "$(B_GREEN)Compiling: $(GREEN)$(notdir $<) 🔨$(NC)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "Done"

bonus : $(BONUS_OBJS) $(OBJS)
	@ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	@echo "$(B_RED)🧹 Cleaning: $(RED)" $(OBJS)
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@echo "$(B_RED)🧹 Cleaning: $(RED)" $(NAME)
	@rm -f $(NAME)

re: fclean all

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
# 	gcc -nostartfiles -shared -o libft.so $(OBJS)

.PHONY: all clean fclean re bonus
