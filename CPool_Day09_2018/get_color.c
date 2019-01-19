/*
** EPITECH PROJECT, 2018
** CPool_Day09_2018
** File description:
** get_color
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color = 0;

    color += red;
    color = color << 8;
    color += green;
    color = color << 8;
    color += blue;
    return (color);
}