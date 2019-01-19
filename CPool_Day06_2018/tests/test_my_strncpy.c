/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** test_my_strncpy
*/

#include <criterion/criterion.h>

char *my_strncpy(char *dest, char const *src, int n);

Test(my_strncpy, copy_three_character_in_empty_array)
{
    char dest[6] = {0};

    my_strncpy(dest, "Hello", 3);
    cr_assert_str_eq(dest, "Hel");
}