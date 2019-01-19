/*
** EPITECH PROJECT, 2018
** CPool_bistro_matic_2018
** File description:
** bistro_matic
*/

#ifndef _BISTRO_
#define _BISTRO_

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#define EXIT_FAIL 84
#define EXIT_SUCCESS 0

#define SYNTAX_ERROR_MSG "syntax error"
#define ERROR_MSG "error"
#define HELP_MESSAGE "USAGE\n\
./calc base operators size_read\n\n\
DESCRIPTION\n-base: all the symbols of\
the base\n-operators: the symbols for parentheses \
and the 5 operators\n-size_read: number of \
characters to be read\n"

typedef struct stc_d stc_d;
struct stc_d {
    int len1;
    int len2;
    int x;
    char *ten;
    char *stenpow;
    char *s1_dyn;
    char *s2_dyn;
    char *res;
};

char *put_res_divide(char * s1, char *s2, char *res);
char *my_moins_devant(char *s1);
int my_strcmplen(char const *s1, char const *s2);
int finds(char *str, char *base, char *ope);
int my_strcmplen(char const *s1, char const *s2);
int is_calc_correct(char *calc, char *op);
int is_c_op(char c, char *op);
char *my_revstrzero(char *str);
char *power_ten(char *nbase, int p);
char *find_base(char c, char *base);
void base_ten_to_x_neg(char **res, char **result, int is_neg);
char **malloc_dblptr(char **arr, int size);
void clean_str(char **str);
int is_number_base(char c, char *base);
char change_smallest(int i, char *s2);
void put_minus(char *s1, char **result);
char change_smallest_sub(int i, char *s2);
char *base_ten_to_x(char *str, char *base);
char *base_x_to_ten(char *result, char *base);
void change_sign(char **str, char *ope);
int is_number_base(char c, char *base);
char *infinad(char *s1, char *s2);
char *infin_div(char *s1, char *s2);
char *infin_mod(char *s1, char *s2);
char *infin_mul(char *s1, char *s2);
int my_put_nbr(int nb);
void my_putchar(char c);
char *eval_expr(char *str, char *ope, char *base);
int my_putstr(char *str);
void my_memset_zerochar(char *str, int len);
char *number(char *str, char *base, int *k);
char *base_ten_to_x(char *str, char *base);
char *postfix_to_ans(int size, char **tab);
int size_n(int nbr);
char *my_nbr_char(int nbr);
int my_strlen(char const *str);
int is_sign(char c);
void move_sign_prec(char **output, char **stackbas[2], int *duo[2], char *str);
char top_stack(char *stack, int i_stack);
int if_number(char *output, char *str, int i, char *base);
void if_sign(char **output, char *stack, int *i_output, int *i_stack);
int verif_str(char *str, char *ope, char *base);
void change_neg_minus(int *str);
char *my_strcpy(char *dest, char *src);
void my_memset(char *str, int len);
int is_neg_result(char **s1, char **s2);
int neg_res_len(char **s1, char **s2, int *len1, int *len2);
char *my_strcat(char *dest, char const *src);
int my_strlencmp(char *str1, char *str2);
int my_strcmp(char const *str1, char const *str2);
void push_stack_str(char *stack, int *i_stack, char c);
void my_double_memset(int *output, char *stack, int len);
void my_revstrdouble(char *str, char *str2);
char *find_biggest(char *a, char *b);
char *find_smallest(char *a, char *b);
char *my_revstr(char *str);
int my_getnbr(char const *str);
int my_str_isnum(char const *str);
int my_strcmpl(char const *s1, char const *s2);
int is_neg_result(char **s1, char **s2);
char *my_moins_devant(char *s1);

#endif