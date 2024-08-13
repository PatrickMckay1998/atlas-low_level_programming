#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    dlistint_t *del;
    unsigned int i = 0;

    if (*head == NULL)
    {
        return (-1);
    }

    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    if (current == NULL)
    {
        return (-1);
    }

    del = current;

    if (del->prev != NULL)
    {
        del->prev->next = del->next;
    }

    if (del->next != NULL)
    {
        del->next->prev = del->prev;
    }

    if (del == *head)
    {
        *head = del->next;
    }
    free(del);

    return (1);
}