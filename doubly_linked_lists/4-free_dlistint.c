#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{   
    dlistint_t *current = head;
    dlistint_t *next;

    if (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}