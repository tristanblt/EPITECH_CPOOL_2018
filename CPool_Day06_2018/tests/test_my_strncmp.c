/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strncmp
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int n);

Test(my_strncmp, return_value_cut_by_ocurence)
{
    cr_assert_eq(my_strncmp("azzzzz", "zaaaaa", 2), -25);
}