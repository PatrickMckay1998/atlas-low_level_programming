#include "main.h"
#include <stdlib.h>
#include <string.h>

char *_strdup(char *str)
{
    char *dup;
    unsigned int length;
    dup = malloc(sizeof(str) * 25);
    
    if (str == NULL)
    {
        return (NULL);
    }
    
    length = 0; 
    
    while(str[length])
    {
    dup[length] = str[length];
    length++;
    }
    return (dup);
}