#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
    char *dup;
    unsigned int i;
    unsigned int length;
    
    if (str = NULL)
    {
        return (NULL);
    }
    
    length = 0; 
    
    while(str[length])
    {
        length++;
    }

    dup = malloc(sizeof(char) * (length + 1));

    if (dup == '\0')
    {
        return (NULL);
    }

    for(i = 0; i <= length; i++)
    { 
        dup[i] = str[i];
    }
    return (dup);
}