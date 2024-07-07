#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void free_listint(listint_t *head)
{
    listint_t* temp = (listint_t*) malloc(sizeof(listint_t));

    free(temp);
    return (0);
}