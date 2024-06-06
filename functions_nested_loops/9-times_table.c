#include "main.h"

/*
* times_table - prints the 9 times table
*
* Return - Always 0
*/

void times_table(void)
{   
    int i, j, mia;
        for (i = 0; i <= 9; i++)
        {
            for (j = 0; j <= 9; j++)
            {
                mia = j * i;
                if (mia j != 0)
                {
                    _putchar(',');
                    _putchar(' ');
                    if (mia < 10)
                    _putchar(' '):
                }
                if (mia > 10)
                {
                    _putchar('0' + mia / 10);
                    _putchar('0' + mia % 10);
                }
                else
                {
                    _putchar('0' + mia);
                }
            }
        _putchar('\n');
        }
}