#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character
 * @str: The string to be processed
 *
 * Description: This function takes a string and prints every other character 
 * starting with the first character, followed by a new line.
 *
 * Return: void
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
