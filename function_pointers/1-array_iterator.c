#include <stdio.h>
#include <stdlib.h>
#include "function.pointers.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
    while (array[m] != '\0')
    {
        (*action)(array, size);
        m++;
    }
}