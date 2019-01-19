##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## Makefile
##

SRC = main.c \
	infin_add.c \
	find_sized.c \
	my_putchar.c \
	my_putstr.c \
	my_revstr.c \
	my_strlen.c \
	my_str_isnum.c \
	my_strcmp.c

SRC2 = infin_add.c \
	find_sized.c \
	my_putchar.c \
	my_putstr.c \
	my_revstr.c \
	my_strlen.c \
	my_str_isnum.c \
	tests/test_infin_add.c \
	my_strcmp.c

NAME = infin_add

NAMETEST = unit-tests

CFLAG = -Wall -o

all:
	gcc $(SRC) $(CFLAG) $(NAME)

clean:
	rm -rf *.gcda
	rm -rf *.gcno

fclean: clean
	rm $(NAMETEST)
	rm $(NAME)

re: fclean all

tests_run:
	gcc $(SRC2) $(CFLAG) $(NAMETEST) --coverage -lcriterion
	./$(NAMETEST)