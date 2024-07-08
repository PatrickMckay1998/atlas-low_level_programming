#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t* temp = *head

    listint_t* prior = NULL
    
    while (*temp != NULL)
    {
        prior = temp;
        temp = temp->next;
        free(temp);
    }
}