/*
** EPITECH PROJECT, 2018
** CPool_evalexpr_2018
** File description:
** eval_expr
*/

#include "bistro_matic.h"

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

void push_stack_to_out(char **output, char *stack, int *i_output, int *i_stack)
{
    for (int j = 0; stack[j]; j++) {
        output[*i_output][0] = stack[*i_stack - j - 1];
        (*i_output)++;
    }
}

void right_par(char **output, char *stack, int *i_output, int *i_stack)
{
    while (stack[*i_stack - 1] != '(')
        if_sign(output, stack, i_output, i_stack);
    push_stack(stack, i_stack);
}

char *eval_expr(char *str, char *ope, char *base)
{
    int i_output = 0;
    int i_stack = 0;
    char **output = malloc_dblptr(output = NULL, finds(str, base, ope));
    char *stack = malloc((finds(str, base, ope) + 2) * sizeof(char));
    int *outputstack[2] = {&i_output, &i_stack};
    char **stackbas[2] = {&stack, &base};

    if (output == NULL || stack == NULL || !verif_str(str, ope, base))
        return (SYNTAX_ERROR_MSG);
    for (int i = 0; str[i]; i++) {
        if ((is_number_base(str[i], base) || str[i] == '-') && str[i] != 0)
            i = if_number(output[i_output++], str, i, base);
        if (is_sign(str[i]))
            move_sign_prec(output, stackbas, outputstack, str + i);
        if (str[i] == '(')
            push_stack_str(stack, &i_stack, str[i]);
        if (str[i] == ')')
            right_par(output, stack, &i_output, &i_stack);
    }
    push_stack_to_out(output, stack, &i_output, &i_stack);
    return (base_ten_to_x(postfix_to_ans(finds(str, base, ope), output), base));
}