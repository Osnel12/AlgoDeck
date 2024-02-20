/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_concat_list
*/

#include "include/my.h"
#include "include/mylist.h"

void my_concat_list(linked_list_t **begin1, linked_list_t *begin2)
{
    linked_list_t *tmp = *begin1;
    linked_list_t *tmp1 = begin2;
    while (tmp->next) {
        tmp = tmp->next;
    }
    tmp->next = tmp1;
}