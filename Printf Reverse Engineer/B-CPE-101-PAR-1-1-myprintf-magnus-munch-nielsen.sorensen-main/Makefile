##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Our glorious makefile
##

SRC	=	src/my_putchar.c\
		src/my_strlen.c\
		src/my_putstr.c\
		src/my_put_nbr.c\
		src/my_switchcase.c\
		src/my_u_flag.c\
		src/my_o_flag.c\
		src/my_n_flag.c\
		src/my_x_flag.c\
		src/my_capital_x_flag.c\
		src/my_e_flag.c\
		src/my_f_flag.c\
		src/my_capital_e_flag.c\
		src/my_printf.c\
		src/print_1.c\
		src/print_2.c\
		src/my_put_float.c\
		src/print_3.c

OBJ     =       $(SRC:.c=.o)

NAME    =       make_printf

all:            $(NAME)

$(NAME):        $(OBJ)
		ar rc libmy.a $(OBJ)

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)
	rm -f libmy.a

re:	fclean all
