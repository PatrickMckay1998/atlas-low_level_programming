#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{   
    
    char *str_1 = s1;
    char *ptr = str_1;
    unsigned int len1, m;

    if (s1 == NULL || s2 == NULL)
    {
        return (NULL);
    }

    while (*str_1 != '\0') /* Getting the length of s1*/
    {
        str_1++;
        len1++;
    }

    str_1 = (char *)malloc(len1 + n + 1); /* Allocating memory using len1 since it is an integer and not a char*/

    while (*s1 != '\0') /* copies s1 to str_1*/
    {
        *ptr = *s1;
        ptr++;
        s1++;
    }

    m = 0;

    while(m < n && s2 != '\0') /* concatenate n characters from s2 to str_1 */
    {
        *ptr = *s2;
        ptr++;
        s2++;
        m++;
    }

    ptr = '\0';

    return (str_1);

}

