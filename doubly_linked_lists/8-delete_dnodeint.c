#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = (*head);
    dlistint_t *next;
    dlistint_t *del;

    unsigned int i = 0;

    while (i != index) /* Loop through list until i = index */
    {
        next = current->next;
        current = next;
        i++;
    }

    del = current;

    del->next->prev = del->prev; /* the prev of the node after del is set to the node before del */
    del->prev->next = del->next; /* the next of the node before del is set to the node after del */

    free(del);

    return(1);

}