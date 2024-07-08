#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    /* So we need to iterate through the linked list until
     the nth index is reached and then return the node */

    listint_t* temp = head;

    unsigned int mia;

    mia = 0;

    while(mia <= index)
    {
        temp = temp->next;
        mia++;
        /* if (mia <= index)
        {
            temp->next
            mia++;
        }
        */
    }

    return (temp);

}