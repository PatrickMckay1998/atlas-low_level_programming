#include "main.h"

char *leet(char *m)
{
    while (*m != '\0')
    {
        if (m == 'a' || m == 'A')
        {
            m = 4;
        }
        else if (m == 'e' || m == 'E')
        {
            m = 3;
        }
        else if (m == 'o' || m = 'O')
        {
            m = 0;
        }
        else if (m == 't' || m == 'T')
        {
            m = 7;
        }
        else if (m == 'l' || m == 'L')
        {
            m = 1;
        }
        else 
        return(m);
        m++;
        
    }
}