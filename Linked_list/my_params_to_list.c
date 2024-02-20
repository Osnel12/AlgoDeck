/*
** EPITECH PROJECT, 2024
** Test
** File description:
** my_params_to_list
*/

#include "./include/mylist.h"
#include "include/my.h"

linked_list_t *create_node(const char *data, linked_list_t *list)
{
    linked_list_t *tmp = malloc(sizeof(linked_list_t) + 1);
    tmp->data = strdup(data);
    tmp->next = list;
    return tmp;
}

linked_list_t *my_params_to_list(int ac, char const **av)
{
    linked_list_t *list = NULL;
    for (int i = 0; i < ac; i++) {
        list = create_node(av[i], list);
    }
    return list;
}

void print_list(linked_list_t *list)
{
    if (!list)
        return;
    printf("%s\n", (char *)list->data);
    list = list->next;
    print_list(list);
}
