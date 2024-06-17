#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{   
    unsigned int str_1 = nmemb;

    if (nmemb == '\0'|| size == '\0')
    {
        return (NULL);
    }

    while (str_1 != '\0')
    {
        str_1++;
    }

    str_1 = calloc(nmemb, size);

}