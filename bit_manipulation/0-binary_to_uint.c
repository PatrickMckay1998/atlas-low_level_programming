#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

unsigned int binary_to_uint(const char *b);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}

unsigned int binary_to_uint(const char *b)
{
    /* iterat through b and get the str_len 
    int nico;
    int str_len;
    int int_val = 1, total = 0;
    int mia;

    char jo;

    nico = 0;

    while(b[jo] != '\0')
    {
         /* This should iterate through the string getting the length 
        printf("nico now = %d", nico);
        printf("jo = %c", jo);
        jo++;
    }  

    str_len = nico; /* set the value of nico to str_len */

    int str_len = strlen(b);

    int mia, total = 0, int_val = 1;

    for(mia = (str_len - 1); mia >= 0; mia--) /* set mia to end of the string, while mia is greater than 0, mia decrements */
    {
        if (b[mia] == '1') /* if mia equals a 1 then */
        {
            total += int_val; /* total adds and then assigns the previous total and the new int_val to total */
            int_val *= 2; /* int_val goes up by the next power of 2 */
            printf("int_val = %d\n", int_val);
        }
    }
    return (total); 
}