#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
    unsigned int sum, j;
    
    va_list args;

    va_start(args, n);
    
    if (n == 0)
    {
        return (0);
    }
    
    sum = 0;
    
    for (j = 0; j <= n - 1; j++)
    {
      sum = sum + va_arg(args, int);
    }
    
    va_end(args);
    
    return (sum);
}