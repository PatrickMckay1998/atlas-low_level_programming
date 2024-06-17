#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{   
    unsigned int *arr_1;
    int i;

    arr_1 = malloc(size * nmemb);

    if (nmemb == 0|| size == 0 || arr_1 == 0)
    {
        return (NULL);
    }

    while(arr_1[i] < nmemb)
    {   
        i = 0;
        i++;
    }

    return (arr_1);
}