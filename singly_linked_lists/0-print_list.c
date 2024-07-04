#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/* lists.h contains the prototype for the list_t */

size_t print_list(const list_t *h)
{
    const list_t *temp = h;

    unsigned int mia;

    mia = 0;
    
    

    Lets try splitting these two up

    while (temp != NULL && mia != temp->len)
    {   
        if (temp->str == " ")
        {
            printf("[0]");
            printf("\n");
        }
        printf("[%d] %s\n", temp->len, temp->str);
        mia++;
        temp = temp->next;
    }



    return(mia);
}