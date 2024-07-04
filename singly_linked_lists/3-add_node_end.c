#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    const char* str2;
    
    list_t **ptr;
    
    ptr = head;
    
    temp = (list_t**) malloc(sizeof(list_t));

    str2 = strdup(str);

    temp->str = str2;
    temp->next = NULL;

    while(ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return(&temp);
}

