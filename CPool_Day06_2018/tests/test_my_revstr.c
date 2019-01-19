/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *str);

Test(my_revstr, return_value_is_reversed)
{
    cr_assert_str_eq(my_revstr("Hello"), "olleH");
}