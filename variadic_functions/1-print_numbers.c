#include <stdio.h> 
#include <stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{      
unsigned int b, i;

    va_list args;

    va_start(args, n);

    for(b = 0; b <= n -1; b++)
    { /*this loops through and gets the number of args*/
        i = va_arg(args, int);
        /* in this if statement I want to print separator and n
        if separator is null then dont print it. Do I need a space then? 
        like printf(" ") it doesnt say, it just says dont print it. */
        for ()
        
        /* if (separator == NULL)
        {
            b++
        }

        printf("%d%s", i, separator); */

    }

    va_end(args);
    
    return;

}