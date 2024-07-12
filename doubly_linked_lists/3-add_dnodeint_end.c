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

    dlistint_t* next_node = *head;

    new_node->n = n;
    new_node->next = NULL;



   if (*head == NULL) /* if head is null then set new node as head */
        {
            new_node->prev = NULL; 
            *head = new_node;
            return (new_node);
        }
   
    
    while (*head != NULL) /* loop through linked list using next node*/
    {   
        next_node = next_node->next;
    }    
    
    next_node->next = new_node;
    new_node->prev = next_node;
    
    return (new_node);

}

/*
    while (next_node->next != NULL) 
        next_node = next_node->next;
        
        next_node->next = new_node;
        new_node->prev = next_node;
    }
*/