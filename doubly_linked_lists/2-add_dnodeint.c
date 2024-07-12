#include <stdlib.h> 
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
* https://www.geeksforgeeks.org/introduction-and-insertion-in-a-doubly-linked-list/
* 
* This is the website used in helping me understand doubly linked lists
* 
* 
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t* new_node = (dlistint_t*) malloc(sizeof(dlistint_t));
    while (new_node != NULL)
    {
        new_node->n = n;
        new_node->next = (*head);
        (*head) = new_node;
    }
    return (new_node);
}
   
   /* Code using geeksforgeeks way of doing it
    while((*head) != NULL)
    {
        new_node->n = n;
    
        new_node->next = (*head);
        new_node->prev = NULL;


        (*head)->prev = new_node;

        (*head) = new_node;
    }
    
}
    */
    
    
    /*
    if (*head == NULL)
    {
        *head = new_node;
        return(new_node);
    }

        new_node->n = n;
        new_node->next = (*head);
        (*head) = new_node;
    */
    

/*
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
*/