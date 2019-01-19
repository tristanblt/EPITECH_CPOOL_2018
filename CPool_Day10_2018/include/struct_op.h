/*
** EPITECH PROJECT, 2018
** CPool_Day10_2018
** File description:
** struct_op
*/

int my_add(int a, int b);
int my_sub(int a, int b);
int my_mul(int a, int b);
int my_div(int a, int b);
int my_mod(int a, int b);

struct operator
{
    char *str;
    int (*fct)(int, int);
}