#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{   
    dlistint_t* temp;

    if (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp->n);
        free(temp);
    }
    
    return;
}