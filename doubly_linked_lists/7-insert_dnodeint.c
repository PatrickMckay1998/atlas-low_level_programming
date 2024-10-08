#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added.
 * @n: The integer value for the new node.
 *
 * Return: Address of the new node, or NULL if it failed or index is out of bounds.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

if (!new_node)
{
return (NULL);
}

new_node->n = n;

if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
if (*h)
{
(*h)->prev = new_node;
}
*h = new_node;
return (new_node);
}

current = *h;

for (i = 0; current && i < idx - 1; i++)
{
current = current ->next;
}

if (!current)
{
free(new_node);
return (NULL);
}

new_node->next = current->next;
new_node->prev = current;

if (current->next)
{
current->next->prev = new_node;
}

current->next = new_node;

return (new_node);
}
