#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{   
int len1, len2;
char *dest, *result;

len1 = 0;
while (s1[len1] != '\0') /*Calculate length of s1*/
{
len1++;
}
len2 = 0;
while (s2[len2] != '\0') /*Calculate length of s2*/
{
len2++;
}

result = (char *)malloc(len1 + len2 +1);

if (result == NULL) /* NULL statement out of the way */
{   
return (NULL);
}

dest = result;
    
while (*s1 != '\0') /* Copies s1 to dest ptr */
{
*dest++ = *s1++;
}

while (*s2 != '\0') /* Copies s2 to dest ptr*/
{
*dest++ = *s2++;
}

dest = '\0'; /* Adds null byte to end of dest ptr*/
return (result); /* returns result ptr with allocated memory*/
}