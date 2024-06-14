#include "main.h"
/**
* _strcat - Concatenates two strings
* @dest: The destination string
* @src: The source string
*
* Return: A pointer to the resulting string 'dest'
*/
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;

while (*dest_end != '\0') /* while the destination end does not equal NULL, it also starts at zero in the array*/
{
dest_end++; /* destination end increment by one in the array*/
}

while (*src != '\0') /* while the source does not equal null*/
{
*dest_end = *src; /* destination end equals source*/
dest_end++; /* destination end increment to two*/
src++; /* source increments to one and goes back up to */
}

*dest_end = '\0'; /* this is adding the null byte at the end, I think. */

return (dest);
}
