#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
    /*Create a new node*/
   typedef struct list_t new_node = (struct list_t*) malloc(sizeof(struct list_t));
    /*Add the data*/
    new_node->str = str;
    
    new_node->next = (*head);

    (*head) = new_node;
}