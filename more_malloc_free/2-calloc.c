#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{   
    void arr_1 = nmemb;
    int i;

    arr_1 = malloc(size * nmemb);

    if (nmemb == 0|| size == 0 || str_1 == 0)
    {
        return (NULL);
    }

    while(i < nmemb)
    {   
        i = 0;
        i++;
    }

    return (arr_1);
}