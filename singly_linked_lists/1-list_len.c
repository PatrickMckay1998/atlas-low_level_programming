#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
    const list_t *pat = h;
    unsigned int mia;

    mia = 0;
    
    while (pat != NULL)
    {
        mia++
        pat->next;
    }

    return (mia);
}