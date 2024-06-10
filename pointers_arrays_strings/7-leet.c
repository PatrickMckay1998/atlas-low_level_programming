#include "main.h"

char *leet(char *m)
{
    while (*m != '\0')
    {
        if (m == 'a' || m == 'A')
        {
            m = '4';
            m++;
        }
        else if (m == 'e' || m == 'E')
        {
            m = '3';
            m++;
        }
        else if (m == 'o' || m == 'O')
        {
            m = '0';
            m++;
        }
        else if (m == 't' || m == 'T')
        {
            m = '7';
        }
        else if (m == 'l' || m == 'L')
        {
            m = '1';
            m++;
        }
        return (m);
    }
}