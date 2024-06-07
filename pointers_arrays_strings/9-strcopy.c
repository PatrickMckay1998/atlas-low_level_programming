#include "main.h"

char *_strcpy(char *dest, char *src)
{
    char *orig_dest = dest;

    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';  // Add the terminating null byte

    return orig_dest;
}