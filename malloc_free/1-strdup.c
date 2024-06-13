#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char *dup;
    unsigned int i;
    unsigned int length;
    
    if (str == NULL)
    {
        return (NULL);
    }
    
    length = 0; 
    dup = malloc(sizeof(str));
    
    while(str[length])
    {
    length++;

    if (dup == NULL)
    {
        return (NULL);
    }

    for(i = 0; i <= length; i++)
    { 
        dup[i] = str[i];
    }
    }
    return (dup);
}