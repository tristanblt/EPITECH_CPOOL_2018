/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** my_putstr
*/

void my_putchar(char c);

int my_putstr(char const *str)
{
    int	i = 0;
    while (*(str + i) != '\0') {
	my_putchar(*(str + i));
        i++;
    }
    my_putchar('\n');
    return (0);
}