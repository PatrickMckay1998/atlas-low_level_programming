#include <stdlib.h>
#include "main.h"

/* Returns a pointer to the allocated memory
    if malloc fails then the function should cause a normal process termination with a status value of 98
*/

void *malloc_checked(unsigned int b)
{
    unsigned int *return_ptr;
    unsigned int diff_b = b;

    return_ptr = malloc(sizeof(diff_b));

    return (return_ptr);
}