/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_apply_on_nodes
*/

#include "include/my.h"
#include "include/mylist.h"

int my_apply_on_nodes (linked_list_t *begin, int (*f)(void *))
{
    linked_list_t const *tmp = begin;
    if (!tmp)
        return 0;
    (*f)(tmp->data);
    my_apply_on_nodes(tmp->next, (*f));
}