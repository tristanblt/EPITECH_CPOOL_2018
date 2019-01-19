/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strlowcase(char *str);

Test(my_strlowcase, return_value_in_lowcase)
{
    cr_assert_str_eq(my_strlowcase(strdup("aAzZ")), "aazz");
}