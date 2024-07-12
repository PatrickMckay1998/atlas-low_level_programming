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
    
    if ((*head) == NULL) /* if head is null then set new node as head */
    {
       new_node->prev = NULL; 
       (*head) = new_node;
       return (new_node);
    }

    while (next_node->next != NULL) /* while head doesnt equal null then move to the next */
    { /* go through the list until the end, set next to = the new node
        set the new node prev to point to next_node */
        next_node = next_node->next;
        next_node->next = new_node;
        new_node->prev = next_node;
    }
    
    return (new_node);

}
/*
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
*/