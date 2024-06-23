#include <stdarg.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...)
{
    int sum;
    
    va_list args;

    va_start(args, n);
    
    if (n == 0)
    {
        return (0);
    }

    int j = va_arg(args, int);
    
    sum = n + j;
    
}