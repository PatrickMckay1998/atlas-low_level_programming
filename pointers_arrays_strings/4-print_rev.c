#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 *
 * Description: This function takes a string and prints it in reverse order,
 * followed by a new line.
 *
 * Return: void
 */

void print_rev(char *s)
{
int i;
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
