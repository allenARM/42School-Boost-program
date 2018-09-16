NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
HEADER = includes/printf.h

CFILES = src/ft_itoa_base.c src/b_printf.c src/ft_printfhelper.c src/ft_smallfn.c
OFILES = *.o

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -I$(HEADER) -c $(CFILES)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
