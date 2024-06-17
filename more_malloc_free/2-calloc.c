#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{   
    void str_1 = nmemb;

    str_1 = malloc(size * nmemb);

    if (nmemb == 0|| size == 0)
    {
        return (NULL);
    }

    while (str_1 != '\0')
    {
        str_1++;
    }

    return(str_1++);

}