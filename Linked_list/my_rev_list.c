/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_rev_list
*/

#include "./include/mylist.h"
#include "include/my.h"

void my_rev_list (linked_list_t **begin)
{
    linked_list_t *list = *begin;
    linked_list_t *cpy = NULL;

    while (list) {
        cpy = create_node(list->data, cpy);
        list = list->next;
    }
    *begin = cpy;
}