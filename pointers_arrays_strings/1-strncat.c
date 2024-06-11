#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 *
 * Return: A pointer to the resulting string `dest`
 */

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

return (dest);
}
