##
## EPITECH PROJECT, 2018
## CPool_infinadd_2018
## File description:
## Makefile
##

SRC = src/main.c \
	src/operations/infin_add.c \
	src/utils/find_sized.c \
	src/utils/my_putchar.c \
	src/utils/my_putstr.c \
	src/utils/my_revstr.c \
	src/utils/my_strlen.c \
	src/utils/my_str_isnum.c \
	src/utils/my_strcmp.c \
	src/operations/infin_mul.c \
	src/utils/my_strcpy.c \
	src/operations/infin_div.c \
	src/utils/my_strcat.c \
	src/utils/my_strlencmp.c \
	src/utils/my_strswap.c \
	src/operations/infin_mod.c \
	src/evalexpr/eval_expr.c \
	src/verif/verif_str.c \
	src/evalexpr/number.c \
	src/evalexpr/my_postfix_to_answer.c \
	src/evalexpr/func_eval_expr.c \
	src/utils/my_getnbr.c \
	src/utils/my_nbr_char.c \
	src/verif/func_verif_str.c \
	src/base/base.c \
	src/operations/infinad_util.c \
	src/base/base_util.c

SRCTESTS = src/operations/infin_add.c \
	src/utils/find_sized.c \
	src/utils/my_putchar.c \
	src/utils/my_putstr.c \
	src/utils/my_revstr.c \
	src/utils/my_strlen.c \
	src/utils/my_str_isnum.c \
	src/utils/my_strcmp.c \
	src/operations/infin_mul.c \
	src/utils/my_strcpy.c \
	src/operations/infin_div.c \
	src/utils/my_strcat.c \
	src/utils/my_strlencmp.c \
	src/utils/my_strswap.c \
	src/operations/infin_mod.c \
	src/evalexpr/eval_expr.c \
	src/verif/verif_str.c \
	src/evalexpr/number.c \
	src/evalexpr/my_postfix_to_answer.c \
	src/evalexpr/func_eval_expr.c \
	src/utils/my_getnbr.c \
	src/utils/my_nbr_char.c \
	src/verif/func_verif_str.c \
	src/base/base.c \
	src/operations/infinad_util.c \
	src/base/base_util.c \
	tests/test_operations.c

NAME = calc

NAMETEST = unit-tests

CFLAG = -g -Wall -Iinclude/

.PHONY: all

$(NAME):
	gcc $(SRC) $(CFLAG) -o $(NAME)

all: $(NAME)

clean:
	rm -rf *.gcda
	rm -rf *.gcno

fclean: clean
	rm -rf $(NAMETEST)
	rm -rf $(NAME)

re: fclean all

tests_run:
	gcc $(SRCTESTS) $(CFLAG) -o $(NAMETEST) --coverage -lcriterion
