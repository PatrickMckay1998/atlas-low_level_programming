#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t* next_node = (*head); /* Set next node to head*/

    dlistint_t* new_node = (dlistint_t*) malloc (sizeof(dlistint_t)); /* Create new node for linked list */

    while (next_node != NULL)
    {
        if (next_node == NULL)
        {
            new_node->n = n;
            new_node->next = NULL;
            next_node = new_node;
        }
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