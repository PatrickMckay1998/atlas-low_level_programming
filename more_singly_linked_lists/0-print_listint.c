#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
* @pat: pat is used to access the linked list
* @mia: She contains the number of elements to later return
*
* Description: This program takes the linked list and prints out the data
* stored inside of the nodes and returns the number of elements
*
* Return: returns the number stored in mia
*
*/

size_t print_listint(const listint_t *h)
{
const listint_t *pat = h;

int mia;

mia = 0;

while (pat != NULL)
{
printf("%d\n", pat->n);
mia++;
pat = pat->next;
}
return (mia);

}
