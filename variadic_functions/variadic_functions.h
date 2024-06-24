#ifndef variadic_functions_h
#define variadic_functions_h

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...)
{
    va_list args;

    va_start(args, n);

    for(b = 0; b <= n -1; b++)
    {
        i = va_arg(args, int)
        if(separator == 'NULL')
        {
            b++;
        }
        printf("%d", i);
    }
    
    return (0);

}

#endif