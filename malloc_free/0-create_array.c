#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{   
    unsigned int i = 0;
    char *str_array = NULL;
    str_array = malloc(sizeof(char) * size + 1);

    if (str_array == NULL)
    {
        return (NULL);
    }
    if (size == 0)
    {
        return (NULL);
    }
    for (i = 0; i < size; i ++)
    {
        str_array[i] = c;
    }
    return (str_array);
}