/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_strlen2
*/

int my_strlen2(char const *str)
{
    int	i = 0;
    while (*(str + i) != '\0') {
        i++;
    }
    return (i);
}