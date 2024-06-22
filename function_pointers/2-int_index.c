#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{   
    if (size <= 0)
    {
        return (-1);
    }

    m = 0;

    while (array[m] != '\0')
    {
        if (cmp(array[m]) != 0)
        {
            return (m);
        }
        else if (cmp(array[m]) == 0)
        {
            return (-1);
        }
        m++;
    }
}