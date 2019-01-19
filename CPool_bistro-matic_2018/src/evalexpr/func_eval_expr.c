/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** func_eval_expr
*/

#include "bistro_matic.h"

int predec(char c)
{
    if (c == '(')
        return (0);
    if (c == '+' || c == '-')
        return (1);
    if (c == '*' || c == '/' || c == '%')
        return (2);
    else
        return (0);
}

char top_stack(char *stack, int i_stack)
{
    if (i_stack > 0)
        return stack[i_stack - 1];
    return (0);
}

int if_number(char *output, char *str, int i, char *base)
{
    int j = 0;

    if ((*(str+i-1) == '*' || *(str+i-1) == '/' || *(str+i-1) == '%') &&\
    *(str + i) == '-') {
        my_strcpy(output, number(str + i, base, &j));
        i += j - 1;
    }
    else if (is_number_base(*(str+i), base)) {
        my_strcpy(output, number(str + i, base, &j));
        i += j - 1;
    }
    return (i);
}

void if_sign(char **output, char *stack, int *i_output, int *i_stack)
{
    output[*i_output][0] = top_stack(stack, *i_stack);
    stack[*i_stack - 1] = 0;
    (*i_output)++;
    (*i_stack)--;
}

void move_sign_prec(char **output, char **stackbas[2], int *duo[2], char *str)
{
    if ((*str == '-' || *str == '+') && !is_number_base(*(str-1), \
    *stackbas[1]) && !(*(str-1) == ')')) {
        my_strcpy(output[*duo[0]], "0");
        (*duo[0])++;
    }
    while (predec(*str) <= predec(top_stack(*stackbas[0], *duo[1])))
        if_sign(output, *stackbas[0], duo[0], duo[1]);
    push_stack_str(*stackbas[0], duo[1], *str);
}