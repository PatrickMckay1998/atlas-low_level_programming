#include "main.h"

/*
* times_table - prints the 9 times table
*
* Return - Always 0
*/

void times_table(void)
{   
    char m;
    int i, j;
        for (i = 0; i <= 9; i++)
        {
            for (j = 0; j <= 9; j++)
            {
                m = (j * i);
                _putchar(m);
                _putchar(',');
                _putchar(' ');
            }
        _putchar('\n');
        }
}