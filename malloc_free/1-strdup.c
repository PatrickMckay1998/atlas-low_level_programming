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
    dup[length] = str[length]
    length++;
    }
    return (dup);
}