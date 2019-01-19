/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_str_isnum(char *str);

Test(my_str_isnum, return_value_is_not_num)
{
    cr_assert_eq(my_str_isnum("abzZ1"), 0);
}

Test(my_str_isnum, return_value_is_num)
{
    cr_assert_eq(my_str_isnum("123"), 1);
}