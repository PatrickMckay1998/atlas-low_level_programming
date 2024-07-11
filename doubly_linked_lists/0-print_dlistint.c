#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/*int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
} 
*/

size_t print_dlistint(const dlistint_t *h)
{
    const dlistint_t *temp = h;

    int mia = 0;

    /*
    if (temp->next == NULL)
    {
        return (0);
    }
    */

    /*
    while (temp != NULL)
    {   
        mia++;
        printf("%d\n", temp->n); 
        temp = temp->next;
    }
    */

   while (temp)
   {
        mia++;
        printf("%d", temp->n);
        temp = temp->next;
    }
    return (mia);

    
}