#include <stdio.h> 
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{      
unsigned int b, j;

    va_list args;

    va_start(args, n);

    for(b = 0; b <= n -1; b++)
    {
        j = va_arg(args, int);

        if (j != 'NULL')
        {
          printf("%d", j);
        }
        else
        {
          printf("(nil)");
        }
        
        if (separator != NULL && b <= n -1)
        {
          printf("%s", separator);
        }

    }

    va_end(args);
    
    return;

}
