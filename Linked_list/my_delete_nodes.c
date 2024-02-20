/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_delete_nodes
*/

#include "./include/mylist.h"
#include "include/my.h"

int my_delete_nodes(linked_list_t **begin, void const *data_ref, int (*cmp)())
{
    linked_list_t *tmp = *begin;
    linked_list_t *prev = NULL;
    while ((*cmp)(tmp->data, data_ref)) {
        prev = tmp;
        tmp = tmp->next;
    }
    prev->next = tmp->next;
    free(tmp);
    return 0;
}