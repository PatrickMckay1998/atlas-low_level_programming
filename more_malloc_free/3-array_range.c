#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{   
    int *arr_1;
    int m;
    
    arr_1 = malloc((max - min + 1) * sizeof(int));

    if(min >= max)
    {
        return (NULL);
    }

    m = 0;

    while (min != max) /* while I is more than min and less than max */
    {
        arr_1[m] = min;
        min++;
        m++;
    }

    return (arr_1);
}