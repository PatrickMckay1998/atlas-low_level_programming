#include <stdlib.h>
#include "main.h"

/* 
* *malloc_checked - Allocates memory using malloc
* @return_ptr: a pointer to the new allocated memory
* 
* Return: returns pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{   
    void *ptr;

    ptr = malloc(b);
    if (ptr == NULL)
    {
        exit(98);
    }

    return (ptr);
}
