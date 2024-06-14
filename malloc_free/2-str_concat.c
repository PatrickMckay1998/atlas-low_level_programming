#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    /* concatenate two strings
    - we know we have two strings
    - we know we are going to be using a for loop and a while loop
    - */

    char new_str;
    char *dest_end = s1;
    int i;
     if (s1 == NULL || s2 == NULL)
    {
        return (NULL);
    }

    dest_end = malloc(sizeof(s1) && (s2));
    i = 0;
    while (dest_end != NULL)
    {
        dest_end++;
    }

    while (s2 != NULL) /* this loop copies each character from string 2
        to the position pointed ot by the dest end. After each copy, both dest end and string 2
        are incremented to point to the next character in their respective strings*/
    {
        dest_end = s2; 
        dest_end++;
        s2++;
    }
    
    dest_end = NULL; /* Add a null byte to the end*/
    return (s1);
}