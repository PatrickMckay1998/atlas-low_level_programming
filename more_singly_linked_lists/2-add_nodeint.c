#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
    const int temp_n = n;

    listint_t* new_node = (listint_t*) malloc (sizeof(listint_t));
    
    new_node->n = temp_n;

    new_node->next = (*head);

    (*head) = new_node;

    return(0);

}