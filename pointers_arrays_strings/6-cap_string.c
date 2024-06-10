#include "main.h"

char *cap_string(char *str)
{

    char *separators = " \t\n,;.!?\"(){}";
    char *ptr = str;
    int capnxt = 1;

    while (*ptr != '\0')
    {
        if (capnxt && *ptr >= 'a' && *ptr <= 'z')
        {
            *ptr -= 32;
            capnxt = 0;
        }   
        else if (*separators != '\0' && *ptr != '\0')
        {
            capnxt = 1;
        }
        else 
        {
            capnxt = 0;
        }
        ptr++;
    }
    return (str);
}