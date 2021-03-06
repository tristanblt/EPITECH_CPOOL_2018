/*
** EPITECH PROJECT, 2018
** CPool_Day11_2018
** File description:
** my_find_node
*/

#include "mylist.h"
#include <stdlib.h>

linked_list_t *my_find_node(linked_list_t const *begin, void const *data_ref,
int (*cmp)())
{
    while (begin != NULL) {
        if ((*cmp)(begin->data, data_ref) == 0) {
            return (begin);
        }
        begin = begin->next;
    }
    return (NULL);
}