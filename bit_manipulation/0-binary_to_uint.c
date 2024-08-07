#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/*
unsigned int binary_to_uint(const char *b);

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
*/

unsigned int binary_to_uint(const char *b)
{   
    int mia, total = 0, int_val = 1;
    
    int jo, len = 0;
    
    int str_len;

    for (jo = 0; b[jo] != '\0'; jo++)
    {   
        len++;
    }
    
    str_len = len;

    for(mia = (str_len - 1); mia >= 0; mia--)
    /* set mia to end of the string, while mia is greater than 0, mia decrements */
    {   
        /*if mia doesnt equal a one or a zero or if b is null then return 0
        
        if(b[mia] != '1' && b[mia] != '0' || b == NULL)
        {
            return (0);
        }
        */

        if (b[mia] == '1') /* if mia equals a 1 then */
        {
            total += int_val; /* total adds and then assigns the previous total and the new int_val to total */
            int_val *= 2; /* int_val goes up by the next power of 2 */
            /*printf("int_val = %d\n", int_val);*/
        }
    }
    return (total);
}