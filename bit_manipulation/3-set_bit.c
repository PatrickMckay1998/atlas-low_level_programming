#include <stdio.h>
#include "main.h"

int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int mask;

    if (index >= sizeof(unsigned long int) * 8) /* check if index is out of range */
    {
        return (-1);
    }

    mask = 1UL << index; /* Create a mask with a bit set at the specified index */
    *n |= mask; /* Use OR to set the bit at index to 1 */

    return (1);
}