#include <stdio.h>
#include <stdlib.h>
#include "function.pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
    int m;
    size_t og_size = size; 

    m = 0;

    while (array[m] != '\0')
    {
        (*action)(*array, size);
        m++;
    }
}