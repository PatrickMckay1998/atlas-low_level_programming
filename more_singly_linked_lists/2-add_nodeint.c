#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t **head_ref = head;

    listint_t** new_node = (listint_t**) malloc (sizeof(listint_t));
    
    new_node->n = n;

    new_node->next = (**head_ref);

    (**head_ref) = new_node;

    return(&head_ref);

}