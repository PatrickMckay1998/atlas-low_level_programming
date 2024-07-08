#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t** temp = (listint_t**) malloc(sizeof(listint_t));
    
    while (*head != NULL)
    {
        head = temp;
        head = temp->next;
        free(temp);
    }
}