/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, return_value_cut_by_ocurence)
{
    cr_assert_str_eq(my_strstr("Hello", "l"), "llo");
}