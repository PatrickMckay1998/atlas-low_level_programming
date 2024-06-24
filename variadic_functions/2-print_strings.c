#include <stdio.h> 
#include <stdarg.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int j;
    char *mia;
  
    va_start(args, n);
  
    for (j = 0; j < n; j++)
    {
        mia = va_arg(args, unsigned int);
    
        if (mia == NULL)
        {
            printf("(nil)"); 
        }
        else 
        {
            printf("%s", mia); 
        }
    
        if (separator != NULL && j < n - 1)
        {
            printf("%s", separator); 
        }
    } 
    va_end(args);
    
    printf("\n");
  
}
