#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

void free_listint(listint_t *head)
{
    free(*head);
    return (0);
}