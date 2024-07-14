#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t** next, del;

    unsigned int i = 0;

    while (i != index) /* Loop through list until i = index */
    {
        next = (*head)->next;
        (*head) = next;
        i++;
    }

    del = (*head);

    del->next->prev = del->prev; /* the prev of the node after del is set to the node before del */
    del->prev->next = del->next; /* the next of the node before del is set to the node after del */

    return(1);

}