#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
    list_t *temp;

    while (*head != NULL)
    {
        temp = *head;
        head = head->next;
        free(head);
    }
    return;
}