#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/* 
* https://www.geeksforgeeks.org/introduction-and-insertion-in-a-doubly-linked-list/
*
* This is the website I used to help get the structure for my code
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t* new_node = (dlistint_t*) malloc (sizeof(dlistint_t)); /* Create new node for linked list */

    dlistint_t* next_node = (dlistint_t*) malloc (sizeof(dlistint_t)); /* create next node to go through list */

    new_node->n = n;
    new_node->next = NULL;

    next_node = (*head); /* this should initialize next_node to head so it can move through the list */
    
    if ((*head) == NULL) /* if head is null then set new node as head */
    {
       new_node->prev = NULL; 
       (*head) = new_node;
       return (new_node);
    }

    while (next_node != NULL) /* loop through linked list using next node*/
    {
        next_node = next_node->next
        if (next_node == NULL) /* when next node reaches null, set next node next to equal new node instead */
        {
            next_node->next = new_node;
            new_node->prev = next_node; /* new node next is set to null and then we set prev to what is currently next_node */
        }
    }
    
    return (new_node);

}

/*
    while (next_node->next != NULL) 
        next_node = next_node->next;
        
        next_node->next = new_node;
        new_node->prev = next_node;
    }
*/