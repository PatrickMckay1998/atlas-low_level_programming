#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
* @pat: This is what is used to start goint into the linked list
* @mia: She contains the number of elements
*
* Description: This program takes the struct H and iterates through
* each node and uses mia to take in the number of elements
* will retrun the numer of elements stored in mia
*
* Return: Return the number of elements contained in mia
*/

size_t list_len(const list_t *h)
{
const list_t *pat = h;
unsigned int mia;

mia = 0;

while (pat != NULL)
{
mia++;
pat = pat->next;
}

return (mia);
}
