/*
** EPITECH PROJECT, 2018
** CPool_Day11_2018
** File description:
** my_apply_on_nodes
*/

#include "mylist.h"
#include "my.h"
#include <stdlib.h>

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    while (begin != NULL) {
        (*f)(begin->data);
        begin = begin->next;
    }
    return (0);
}