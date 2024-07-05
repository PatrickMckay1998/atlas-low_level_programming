#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t new_node = (listint_t) malloc (sizeof(listint_t));
    /* create a new node to be added */

    /* Add data to new node */
    new_node->n = const int n;

    new_node->next = (**head);

    (**head) = new_node;

    return(&head);

}