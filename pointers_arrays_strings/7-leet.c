#include "main.h"

char *leet(char *nico)
{
    char *ptr = nico;
    char brax[10] = "aAeEoOtTlL";
    char tiny[10] = "4433007711";
    int m;
    while (*ptr != '\0')
    {
        for (m = 0; m <= 10; m++)
        {
            if (*ptr == brax[m])
            {
                *ptr = tiny[m];
                break;
            }
        }
        ptr++;
    }
    return nico;
}