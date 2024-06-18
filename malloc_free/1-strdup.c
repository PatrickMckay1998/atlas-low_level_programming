#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
* _strdup - duplicates a string
* @dup: pointer for the duplicate string
* @length: length of the string that duplicates
*/

char *_strdup(char *str)
{
char *dup;
unsigned int length;

dup = malloc(sizeof(str));

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
