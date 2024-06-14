#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    /* concatenate two strings
    - we know we have two strings
    - we know we are going to be using a for loop and a while loop
    - */

    int length, j;

     if (s1 == NULL || s2 == NULL)
    {
        return (NULL);
    }

    s1 = malloc(sizeof(s1) + sizeof(s2));
    
    length = 0;

    while (s1[length] != '\0')
    {
        length++;
    }

    for (j = 0; s2[j] != '\0'; j++, length++) /* this loop copies each character from string 2
        to the position pointed to by the dest end. After each copy, both dest end and string 2
        are incremented to point to the next character in their respective strings*/
    {
        s1[length] = s2[j];
    }
    
    s1[length] = '\0'; /* Add a null byte to the end */
    return (s1);
}