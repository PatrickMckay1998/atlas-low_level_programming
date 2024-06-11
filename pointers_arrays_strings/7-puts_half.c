#include "main.h"

/**
 * puts_half - Prints the second half of a string
 * @str: The string to be processed
 *
 * Description: This function takes a string and prints the second half of 
 * the string, followed by a new line. If the number of characters is odd,
 * it prints the last n characters where n = (length_of_the_string - 1) / 2
 *
 * Return: void
 */

void puts_half(char *str)
{
int len = 0, i, n;

while (str[len] != '\0')
{
len++;
}

if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len - 1) / 2 + 1;
}

for (i = n; i < len; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
