#include <stdio.h> 
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{      
unsigned int b, j;

    va_list args;

    va_start(args, n);

    for(b = 0; b <= n -1; b++)
    {
        j = 0;

        if (j < b && separator != NULL)
        {
            printf("%d", n);
        }

        else if(separator != NULL)
        {
            printf("%s", separator);
        }
        
    }

    va_end(args);
    
    return;

}
