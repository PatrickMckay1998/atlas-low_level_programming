#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

int sum_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
    dlistint_t *next;

    int sum;

    sum = 0;

    while (current != NULL)
    {
        sum += current->n;
        next = current->next;
        current = next;
    }

    return (sum);

}