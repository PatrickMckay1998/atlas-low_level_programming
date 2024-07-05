#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint(const listint_t *h)
{
    const listint_t *pat = h;

    int mia;

    mia = 0;

    while (pat != NULL)
    {
        printf("%d", pat->n);
        mia++;
        pat = pat->next;
    }
    return (mia);

}