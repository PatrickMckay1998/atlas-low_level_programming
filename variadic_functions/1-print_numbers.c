#include <stdio.h> 
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{      
unsigned int b, i;

    va_list args;

    va_start(args, n);

    for(b = 0; b <= n -1; b++)
    {
        i = va_arg(args, int);

        if (separator == NULL)
        {
            b++;
        }

        printf("%c %d", separator, i);

    }

    va_end(args);
    
    return;

}