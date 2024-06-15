#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    while (s1[len1] != '\0')
    {
        len1++;
    }

    while (s2[len2] != '\0')
    {
        len2++;
    }

    char *new_str = (char *)malloc(len1 + len2 +1);

    if (new_str == NULL)
    {
        return (NULL);
    }

    char *dest = *result;
    
    while (*s1 != '\0')
    {
        *dest++ = *s1++;
    }

    while (*s2 != '\0')
    {
        *dest++ = *s2++;
    }

    *dest = '\0';
    return (result);
}