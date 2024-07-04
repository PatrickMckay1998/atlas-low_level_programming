#include <stdio.h>
#include <stdlib.h>
#include "list.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t* new_node = (list_t*) malloc(sizeof(list_t));

    str2 = strdup(*str);

    new_node->str = str2;

    new_node->next = (*head);

    (*head) = new_node;

    return(&new_node->str);
}
