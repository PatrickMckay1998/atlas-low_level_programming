#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t* new_node = (listint_t*) malloc(sizeof(listint_t));

    list_t* last = *head_ref;

    new_node->n = n;

    new_node->next = NULL;

    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
    last = last->next;

    last->next = new_node;
    return;

    
}