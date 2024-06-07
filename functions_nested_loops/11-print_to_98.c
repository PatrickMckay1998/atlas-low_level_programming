#include "main.h"

/*
* print to 98 - prints all natural numbers from input to 98
*
* Return - Always 0
*
*/

void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n <= 98; n++)
        {
            _putchar('0' + n);
            if (n != 98)
            {
                _putchar(',');
                _putchar(' ');
            }
        }
    }

    else
{
    for (; n >= 98; n--)
    {
        _putchar('0' + n);
    
        if (n != 98)
        {
            _putchar(',');
            _putchar(' ');
        }
    }
}
    _putchar('\n');
}

