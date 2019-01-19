/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** my_strcmp
*/

int test_return1(int sum1, int sum2)
{
    if (sum1 > sum2)
        return (1);
    else if (sum1 < sum2)
        return (-1);
    else
        return (0);
}

int my_strcmp(char const *str1, char const *str2)
{
    int k = 0;
    int add1 = 0;
    int add2 = 0;
    int ret = 0;

    while (str1[k] != '\0') {
        add1 = add1 + str1[k];
        k++;
    }
    k = 0;
    while (str2[k] != '\0') {
        add2 = add2 + str2[k];
        k++;
    }
    ret = test_return1(add1, add2);
    return (ret);
}

int my_strcmpl(char const *s1, char const *s2)
{
    int k;

    for (k = 0; s1[k] == s2[k] && s1[k] != 0 && s2[k] != 0; k++);
    return (s1[k] - s2[k]);
}