/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** func_eval_expr
*/

#include <stdio.h>

int number(char *str);
int size_n(int nbr);
void push_stack_str(char *stack, int *i_stack, char c);
void my_double_memset(int *output, char *stack, int len);

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

int if_number(int *output, char *str, int *i_output, int i)
{
    output[*i_output] = number(str + i);
    i += size_n(output[*i_output]) - 1;
    (*i_output)++;
    return (i);
}

void if_sign(int *output, char *stack, int *i_output, int *i_stack)
{
    output[*i_output] = -top_stack(stack, *i_stack);
    stack[*i_stack - 1] = 0;
    (*i_output)++;
    (*i_stack)--;
}

void sign_while(int *output, char *stack, int *duo[2], char *str)
{
    if ((*str == '-' || *str == '+') && (*(str-1) < '0' || *(str - 1) > '9') \
    && !(*(str-1) == ')')) {
        output[*duo[0]] = 0;
        (*duo[0])++;
    }
    while (predec(*str) <= predec(top_stack(stack, *duo[1])))
        if_sign(output, stack, duo[0], duo[1]);
    push_stack_str(stack, duo[1], *str);
}