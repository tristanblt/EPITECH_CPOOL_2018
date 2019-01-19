##
## EPITECH PROJECT, 2018
## CPool_evalexpr_2018
## File description:
## Makefile
##

NAME = eval_expr

SRC = main.c \
	eval_expr.c \
	my_put_nbr.c \
	my_putchar.c \
	my_postfix_to_answer.c \
	number.c \
	my_putstr.c \
	func_eval_expr.c \
	double_memset.c \
	verif_str.c

CFLAG = -g -Wall -W -Wshadow -o

all:
	gcc $(SRC) $(CFLAG) $(NAME)

clean:
	rm *.o
	rm *~

fclean: clean
	rm -rf $(NAME)

re: clean all