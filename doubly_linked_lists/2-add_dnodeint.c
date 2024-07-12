#include <stdlib.h> 
#include <string.h>
#include <stdio.h>
#include "lists.h"

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