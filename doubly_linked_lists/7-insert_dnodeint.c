#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/*
* 
* https://www.geeksforgeeks.org/introduction-and-insertion-in-a-doubly-linked-list/
* 
* This is the website I used that really helped out.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t* new_node = (dlistint_t*) malloc (sizeof(dlistint_t));

    dlistint_t* current = (*h); /* Establish varialbes */
    dlistint_t* next; /* Helps keep track of where we are in the list */
    dlistint_t* prev_node; /* will be used to better understand adding new node later */

    int i = 0;

    new_node->n = n;

    while(i != idx) /* move through list until idx is reached then leave loop */
    {
        next = current->next;
        current = next;
        i++;
    }

    prev_node = current; /* Set current node to prev for my understanding */

    new_node->next = prev_node->next; /* set new node next to what prev was originally pointing to (Makes sens on my board) */
    prev_node->next = new_node; /* Prev node now points to new node instead */
    new_node->prev = prev_node; /* set the prev of our new node to point to the prev node */

    if (new_node->next != NULL)
    {
        new_node->next->prev = new_node;
    }
    
    return (new_node); /* Return new node */

}
