#include <stdlib.h>
#include "main.h"

/* 
* *malloc_checked - Allocates memory using malloc
* @return_ptr: a pointer to the new allocated memory
* 
* Return: returns pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{   /* initialize variables return_ptr*/
unsigned int *return_ptr;
    
/* Allocating memory for the new pointer, I think this is where I am running into issues*/
return_ptr = (unsigned int *)malloc(sizeof(b) * 1);

/* This is the exit statment if malloc fails*/
if (return_ptr == NULL) 
{
exit(98);
}

/* Here is where it should return the pointer to the allocated memory */
return (return_ptr);
}
