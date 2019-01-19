/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** my_strcmp
*/

int my_strncmp(const char *s1, const char *s2, int n)
{
    int i = 0;
    int equal = 0;

    while ((s1[i] != '\0' || s2[i] != '\0') && i < n) {
        if (s1[i] != s2[i] && s1[0] < s2[0]) {
            equal = s1[0] - s2[0];
        }
        else if (s1[i] != s2[i] && s1[0] > s2[0]) {
            equal = s1[0] - s2[0];
        }
        i++;
    }
    return (equal);
}