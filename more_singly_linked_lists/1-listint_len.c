#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

size_t listint_len(const listint_t *h)
{
    listint_t *pat = h;
    int mia;

    mia = 0;

    while(pat != NULL)
    {
        mia++;
        pat = pat->next;
    }

    return (mia);

}