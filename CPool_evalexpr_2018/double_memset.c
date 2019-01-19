/*
** EPITECH PROJECT, 2018
** double_memset.c
** File description:
** double_memset
*/

void my_double_memset(int *output, char *stack, int len)
{
    for (int i = 0; i < len + 2; i++)
        output[i] = -2;
    for (int j = 0; j < len; j++)
        stack[j] = -2;
}