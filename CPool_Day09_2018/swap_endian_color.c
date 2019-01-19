/*
** EPITECH PROJECT, 2018
** CPool_Day09_2018
** File description:
** swap_endian_color
*/

union type
{
    int color;
    int short a;
};

int swap_endian_color(int color)
{
    union type colors;
    int big = 0;
    int result = 0;

    colors.color = color;
    big = colors.color >> 16;
    result = colors.a;
    result = result << 16;
    result+= big;
    return (result);
}