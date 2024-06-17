#include "main.h"
#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{   
    char *j;
    unsigned int *arr_1;
    unsigned int i;

    arr_1 = malloc(size * nmemb);

   if (nmemb == NULL || size == NULL || arr_1 == NULL)
   {
    return (NULL);
   }
   
   /* if (nmemb == 0 || size == 0 || arr_1 == 0)
    {
        return (NULL);
    }
    */
    j = (char *)arr_1;
    
    for(i = 0; i < nmemb * size; i++)
    {   
        j[i] = 0;
    }

    return (arr_1);
}