##
## EPITECH PROJECT, 2018
## CPool_Day10_2018
## File description:
## Makefile
##

SRC = operation.c operations.c

LMY = -lmy

CFLAG = -Wall -o

INC = -I../include

LIB = -L../lib/my

name = my_advanced_do-op

all:
	gcc $(SRC) $(LIB) $(INC) $(LMY) $(CFLAG) $(name)

clean:
	rm *.o

fclean:
	rm *.o $(name)

re: fclean all