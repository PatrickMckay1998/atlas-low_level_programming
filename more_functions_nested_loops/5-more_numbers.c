#include "main.h"

void more_numbers(void)
{
    int m, p;
    for (m = '0'; m <= '10'; m++)
    {
        for (p = '0'; p <= '14'; p++)
        {
            _putchar(p);
        }
    }
    _putchar('\n');
}