#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* lists.h contains the prototype for the list_t */

size_t print_list(const list_t *h)
{
    list_t *temp = h;

    while (temp != NULL)
    {
        printf("%s", temp.str);
        temp = temp.next;
    }
    printf("\n");
}