#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to be printed
 *
 * Description: This function takes a string and prints it to stdout,
 * followed by a new line.
 *
 * Return: void
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
