#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void free_listint2(listint_t **head)
{
    /* listint_t* temp; */

    listint_t* temp = (listint_t*) malloc(sizeof(listint_t));

    while (*head != NULL)
    {
        *head = temp;
        temp->next = NULL;
        free(*head);
    }
    return;
}