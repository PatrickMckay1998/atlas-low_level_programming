#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
    const dlistint_t* temp = h;

    int mia = 0;

    while (temp != NULL)
    {
        mia++;
        temp = temp->next;
    }

    return (mia);

}