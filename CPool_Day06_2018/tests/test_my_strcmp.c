/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strcmp
*/

#include <criterion/criterion.h>

int my_strcmp(char const *s1, char const *s2);

Test(my_strcmp, return_value_cut_by_ocurence)
{
    cr_assert_eq(my_strcmp("azzzzz", "zaaaaa"), -1);
}