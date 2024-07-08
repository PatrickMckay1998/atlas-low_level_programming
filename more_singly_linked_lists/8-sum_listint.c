#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int sum_listint(listint_t *head)
{
    /* we need to iterate through the list and get each value then add those
     together. */

    listint_t* temp = head;

    int mia, mia_next;

    mia = 0;

    while (temp != NULL) /* This is how you iterate through the list */
    {
        mia2 = temp->n; /* Get the value of the data inside of the node */
        result = mia + mia_next; 
        mia = result;
        temp = temp->next;
    }
}

/* Set mia to zero, get the value of the data and put it to mia2, add those two numbers and you get the result
 and then temp is set to the next node in the list, set mia to the value of result after adding mia and mia_next*/