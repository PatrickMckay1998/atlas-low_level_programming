#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src, including the terminating
 *           null byte (\0), to the buffer pointed to by dest.
 * @dest: The destination buffer where the string will be copied to.
 * @src: The source string to be copied.
 *
 * Description: This function copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest. The
 * function returns a pointer to dest.
 *
 * Return: A pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
char *orig_dest = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (orig_dest);
}
