#include "main.h"

/*
*
* _isdigit - checks for a digit
*
* Return - Always 0
*
*/

int _isdigit(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (0);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        return (0);
    }
    else
    {
        return(1);
    }
}