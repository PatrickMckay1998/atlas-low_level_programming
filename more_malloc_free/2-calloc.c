#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    if (nmemb == NULL || size == NULL)
    {
        return (NULL);
    }

    while (str_1 != '\0')
    {
        str_1++;
    }

    str_1 = calloc(nmemb, size);

    return (str_1);

}