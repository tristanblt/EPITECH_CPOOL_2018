/*
** EPITECH PROJECT, 2018
** my_swap.c
** File description:
** Swap content of integer
*/


void my_swap(int *a, int *b)
{
    int	c = *a;
    *a = *b;
    *b = c;
}
