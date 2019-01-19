##
## EPITECH PROJECT, 2018
## CPool_Day10_2018
## File description:
## Makefile
##

SRC2 = 	./../lib/my/my_compute_power_rec.c \
		../lib/my/my_compute_square_root.c \
		../lib/my/my_find_prime_sup.c \
		../lib/my/my_getnbr_base.c \
		../lib/my/my_getnbr.c \
		../lib/my/my_isneg.c \
		../lib/my/my_is_prime.c \
		../lib/my/my_params_to_array.c \
		../lib/my/my_putchar.c \
		../lib/my/my_putnbr_base.c \
		../lib/my/my_put_nbr.c \
		../lib/my/my_putstr.c \
		../lib/my/my_revstr.c \
		../lib/my/my_showmem.c \
		../lib/my/my_showstr.c \
		../lib/my/my_show_word_array.c \
		../lib/my/my_sort_int_array.c \
		../lib/my/my_strcapitalize.c \
		../lib/my/my_strcat.c \
		../lib/my/my_strcmp.c \
		../lib/my/my_strcpy.c \
		../lib/my/my_strdup.c \
		../lib/my/my_str_isalpha.c \
		../lib/my/my_str_islower.c \
		../lib/my/my_str_isnum.c \
		../lib/my/my_str_isprintable.c \
		../lib/my/my_str_isupper.c \
		../lib/my/my_strlen.c \
		../lib/my/my_strlowcase.c \
		../lib/my/my_strncat.c \
		../lib/my/my_strncmp.c \
		../lib/my/my_strncpy.c \
		../lib/my/my_strstr.c \
		../lib/my/my_str_to_word_array.c \
		../lib/my/my_strupcase.c \
		../lib/my/my_swap.c \
		../lib/my/concat_params.c

##OBJ = $(SRC2:.c=.o)

SRC = operation.c operations.c

LMY = -lmy

CFLAG = -Wall -o

INC = -I../include

LIB = -L../lib

NAME = do-op

NAMELIB = libmy.a

all:
	gcc -c $(SRC2)
	ar rc ./../lib/my/$(NAMELIB) *.o
	cp ./../lib/my/$(NAMELIB) ./../lib/
	mkdir -p ./../include
	cp my.h ./../include
	gcc $(SRC) $(LIB) $(INC) $(LMY) $(CFLAG) $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf ./../lib/my/$(NAMELIB) $(NAME)

re: all fclean