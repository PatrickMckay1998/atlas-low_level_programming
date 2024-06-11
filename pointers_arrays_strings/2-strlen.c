#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string to measure
 *
 * Description: This function takes a string as input and returns
 * the length of the string, excluding the terminating null byte (\0).
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}
