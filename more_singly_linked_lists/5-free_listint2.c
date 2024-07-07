#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
    listint_t* temp;

    while (*head != NULL)
    {
        head = temp;
        head = head->next;
        free(head);
    }
    return;
}