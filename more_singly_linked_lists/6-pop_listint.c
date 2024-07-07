#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

int pop_listint(listint_t **head)
{
    listint_t* temp = (listint_t*) malloc(sizeof(listint_t));

    *head = temp;
    head = head->next;
    free(temp);
}