#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node;
    listint_t *current;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    current = *head;
    for (i = 0; current != NULL && i < idx - 1; i++)
    {
        current = current->next;
    }

    if (current == NULL || (current->next == NULL && i < idx - 1))
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}