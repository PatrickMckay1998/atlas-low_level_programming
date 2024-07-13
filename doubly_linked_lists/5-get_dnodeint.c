#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current = head;
    dlistint_t *next;

    unsigned int i;

    i = 0;

    while (i <= index) /* while is less than or equal to index then move on to the next node */
    {
        next = current->next;
        current = next;
        i++;
    }
    
    return (current);

}