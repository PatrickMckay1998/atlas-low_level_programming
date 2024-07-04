#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* lists.h contains the prototype for the list_t */

size_t print_list(const list_t *h)
{
    list_t *temp = h;
    unsigned int mia;

    /* Now we need to print the number of elements */

    mia = 0;

    while (temp != NULL && mia <= temp->len)
    {
        printf("[%d] %s", temp->len, temp->str);
        mia++;
        temp = temp->next;
    }
    printf("\n");
    return (0);
}