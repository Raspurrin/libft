CFLAGS := -Wall -Wextra -Werror
CC := gcc
SRCS := $(shell find . -iname "ft_*.c")
OBJS := $(SRCS:.c=.o) 
#TMPVAR := $(OBJS)
#OBJS := $(filter-out test_%.o ($TMPVAR))
NAME := libft.a

all: $(NAME)

%.o: %.c 
	$(CC) $(CFLAGS) -o $@ -c $< -I .

$(NAME): $(OBJS)
	ar r $(NAME) $(OBJS)

#ft_%:
#	$(CC) $(CFLAGS) sources/$@.c tests/test_$@.c -lbsd -L/mnt/c/Users/Michelle/Documents/Coding_projects/libft/libft.a -o $@.o && ./$@.o

clean: 
	@rm -f $(OBJS)
	@echo "$(OBJS) removed"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) removed"

re: fclean all

.PHONY: all clean fclean