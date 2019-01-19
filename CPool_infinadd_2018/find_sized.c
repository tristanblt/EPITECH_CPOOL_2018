/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** find_sized
*/

int my_strlen(char *str);
int my_strcmp(char const *str1, char const *str2);

char *find_biggest(char *a, char *b)
{
    int c = 0;
    int d = 0;

    if (a[0] == '-')
        c++;
    if (b[0] == '-')
        d++;
    if (my_strcmp(a + c, b + d) >= 0)
        return (a);
    else
        return (b);
}

char *find_smallest(char *a, char *b)
{
    int c = 0;
    int d = 0;

    if (a[0] == '-')
        c++;
    if (b[0] == '-')
        d++;
    if (my_strcmp(a + c, b + d) < 0)
        return (a);
    else
        return (b);
}