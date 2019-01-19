/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strstr
*/

#include <criterion/criterion.h>

char *my_strupcase(char *str);

Test(my_strupcase, return_value_in_upcase)
{
    cr_assert_str_eq(my_strupcase(strdup("aAzZ")), "AAZZ");
}