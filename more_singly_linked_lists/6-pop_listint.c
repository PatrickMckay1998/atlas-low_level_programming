#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t** temp;
    
    while (*head != NULL)
    {
        head = temp;
        head = temp->next;
        free(temp);
    }
}