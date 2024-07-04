#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/*
* @temp: This is temporary variable for h
* @mia: She contains the number of elements to return
* 
* Description: This program calls in a struct with the pointer
* variable 'h' which contains a string and unsigned integer. 
* the program iterates through the nodes and prints our the data stored on 
* the node. 
*
* Return - The number of elements which is stored in the variable mia
*
 */

size_t print_list(const list_t *h)
{
const list_t *temp = h;

unsigned int mia;

mia = 0;

while (temp != NULL && mia != temp->len)
{
/*if (temp->str ==)
{
printf("[0]");
printf("\n");
}
*/
printf("[%d] %s\n", temp->len, temp->str);
mia++;
temp = temp->next;
}



return(mia);
}
