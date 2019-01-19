/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** main
*/

int my_putstr(char const *str);
char *infinad(char *s1, char *s2);
int my_str_isnum(char const *str);

int main(int ac, char **av)
{
    if (!av[1] || !av[2] || av[1][0] == '\0' || av[2][0] == '\0') {
        my_putstr("Invalid arguments");
    }
    else if (!my_str_isnum(av[1]) || !my_str_isnum(av[2])) {
        my_putstr("Invalid arguments");
    }
    else {
        my_putstr(infinad(av[1], av[2]));
    }
    return (0);
}