#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
    char *dest_end = dest;
    int i = 0;

    while (*dest_end != '\0')
    {
        dest_end++;
    }
    while (i < n && src[i] != '\0')
    {
        *dest_end = src[i];
        dest_end++;
        i++;
    }

    *dest_end = '\0';

    return dest;
}