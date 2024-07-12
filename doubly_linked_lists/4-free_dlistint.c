#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

void free_dlistint(dlistint_t *head)
{   
    free(head);
    return;
}