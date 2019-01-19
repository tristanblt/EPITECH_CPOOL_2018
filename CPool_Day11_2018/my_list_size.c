/*
** EPITECH PROJECT, 2018
** CPool_Day11_2018
** File description:
** my_list_size
*/

#include "my.h"
#include "mylist.h"
#include <stdlib.h>

int my_list_size(linked_list_t const *begin)
{
    int i = 0;

    for (i = 0; begin != NULL; i++) {
        begin = begin->next;
    }
    return (i);
}