/*
** EPITECH PROJECT, 2018
** CPool_Day11_2018
** File description:
** my_params_to_list
*/

#include <stdlib.h>
#include "mylist.h"

void add_to_list(linked_list_t *list, char *str)
{
    linked_list_t *element = malloc(sizeof(*element));
    element->data = str;
    element->next = list->next;
    list->next = element;
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    linked_list_t *list = malloc(sizeof(*list));

    for (int i = 0; i < ac; i++)
        add_to_list(list, av[i]);
    return (list->next);
}