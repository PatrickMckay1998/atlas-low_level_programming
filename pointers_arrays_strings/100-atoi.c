#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int found_digit = 0;

    while (*s)
    {
        if (*s == '-')
        {
            sign *= -1;
        }
        else if (*s == '+')
        {
            sign *= 1;
        }
        else if (*s >= '0' && *s <= '9')
        {
            found_digit = 1;
            result = result * 10 + (*s - '0');
        }
        else if (found_digit)
        {
            break;
        }
        s++;
    }

    return (sign * result);
}