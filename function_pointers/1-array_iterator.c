#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int m; 

    m = 0;

    array[m] = malloc(size);

    while (array[m] != '\0')
    {
        (*action)(m);
        m++;
    }
}