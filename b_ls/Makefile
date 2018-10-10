INCLUDES = -I includes
SRCS = ./srcs/*
UTILS = ./utils/*
NAME = b_ls

$(NAME):
	gcc -Wall -Wextra -Werror main.c $(SRCS) $(UTILS) $(INCLUDES) -o $(NAME)

all: $(NAME)

clean:
	/bin/rm $(NAME)

fclean: clean

re: fclean all
