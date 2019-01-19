/*
** EPITECH PROJECT, 2018
** my_postfix_to_answer.c
** File description:
** my_postfix_to_answer
*/

#include <stdlib.h>

int my_putstr(char const *str);
void change_neg_minus(int *str);

int is_sign(char c)
{
    if (c != '+' && c != '-' && c != '*' && c != '%' && c != '/')
        return (0);
    return (1);
}

int is_negsign(char c)
{
    if (c != -'+' && c != -'-' && c != -'*' && c != -'%' && c != -'/')
        return (0);
    return (1);
}

int moddiv(int a, int b, int c)
{
    if (c == -'/') {
        if (b != 0)
            return (a / b);
        else {
            my_putstr("No division by 0 !\n");
            return (0);
        }
    }
    else if (c == -'*')
        return (a * b);
    else {
        if (b != 0)
            return (a % b);
        else {
            my_putstr("No modulo by 0 !\n");
            return (0);
        }
    }
}

int addsub(int a, int b, int c)
{
    if (c == -'+')
        return (a + b);
    else
        return (a - b);
}

int postfix_to_ans(int size, int *tab)
{
    int j = 0;
    int *tmp = malloc(sizeof(int) * size);

    for (int i = 0; tab[i] != -2; i++)
        if (tab[i] == -'+' || tab[i] == -'-') {
            tmp[j - 2] = addsub(tmp[j-2], tmp[j-1], tab[i]);
            j--;
        }
        else if (tab[i] == -'/' || tab[i] == -'%' || tab[i] == -'*') {
            tmp[j - 2] = moddiv(tmp[j-2], tmp[j-1], tab[i]);
            j--;
        }
        else
            tmp[j++] = tab[i];
    return (tmp[0]);
}