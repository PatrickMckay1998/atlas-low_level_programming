#include "main.h"
#include <stdlib.c>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{   
    char *str_1 = *s1;
    int m;

    if (/*NULL condition goes here*/)
    {
        return (NULL);
    }

    while (*str_1 <= '\0') /* Getting the length of s1*/
    {
        str_1++;
    }

    str_1 = malloc(sizeof(s1) * (s2)); /* Allocating memory */

    m = 0;
    while(m < n && s2[m] != '\0') /* While m is less than int n and the m position in string two does not equal the null*/
    {
        *str_1 = s2[m];
        *str_1++;
        m++;
    }

    return (s1);

}

