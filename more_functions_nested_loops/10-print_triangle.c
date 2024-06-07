#include "main.h"

void print_triangle(int size)
{
    int m, p, n;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (m = 1; m <= size; m++)
    {
        for (p = size - m; p > 0; p--)
        {
            _putchar(' ');
        }
        for (n = 0; n < i; n++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
}