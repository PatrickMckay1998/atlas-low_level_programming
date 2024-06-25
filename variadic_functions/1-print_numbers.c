#include <stdio.h> 
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a separator
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Description: This function takes a variable number of integers and prints them
 * separated by the given separator string. If the separator is NULL, the numbers
 * are printed without any separator. After printing all the numbers, a newline
 * character is printed.
 *
 * Return: This function does not return a value.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int b, j;

    va_list args;

    va_start(args, n);

    for(b = 0; b <= n -1; b++)
    {
        j = va_arg(args, int);

        printf("%d", j);

        if (separator != NULL && b < n -1)
        {
          printf("%s", separator);
        }

    }

    va_end(args);
    printf("\n");

    return;

}
