/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** eval_expr
*/

#include <stdlib.h>

int number(char *str);
int postfix_to_ans(int size, int tab[size]);
int size_n(int nbr);
int my_strlen(char const *str);
int is_sign(char c);
void sign_while(int *output, char *stack, int *duo[2], char *str);
char top_stack(char *stack, int i_stack);
int if_number(int *output, char *str, int *i_output, int i);
void if_sign(int *output, char *stack, int *i_output, int *i_stack);
void my_double_memset(int *output, char *stack, int len);
int verif_str(char *str);

void push_stack(char *stack, int *i_stack)
{
    stack[*i_stack - 1] = 0;
    (*i_stack)--;
}

void push_stack_str(char *stack, int *i_stack, char c)
{
    stack[*i_stack] = c;
    (*i_stack)++;
}

void push_stack_to_output(int *output, char *stack, int *i_output, int *i_stack)
{
    for (int j = 0; stack[j] != -2; j++) {
        output[*i_output] = -stack[*i_stack - j - 1];
        (*i_output)++;
    }
}

void right_par(int *output, char *stack, int *i_output, int *i_stack)
{
    while (stack[*i_stack - 1] != '(')
        if_sign(output, stack, i_output, i_stack);
    push_stack(stack, i_stack);
}

int eval_expr(char *str)
{
    int i_output = 0;
    int i_stack = 0;
    int *output = malloc((my_strlen(str) + 2) * sizeof(int));
    char *stack = malloc((my_strlen(str)) * sizeof(char));
    int *outputstack[2] = {&i_output, &i_stack};

    my_double_memset(output, stack, my_strlen(str));
    if (output == NULL || stack == NULL || !verif_str(str))
        return (0);
    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9' && str[i] != 0)
            i = if_number(output, str, &i_output, i);
        if (is_sign(str[i]))
            sign_while(output, stack, outputstack, str + i);
        if (str[i] == '(')
            push_stack_str(stack, &i_stack, str[i]);
        if (str[i] == ')')
            right_par(output, stack, &i_output, &i_stack);
    }
    push_stack_to_output(output, stack, &i_output, &i_stack);
    return (postfix_to_ans(my_strlen(str), output));
}