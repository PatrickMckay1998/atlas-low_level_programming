#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 *
 * Description: This function swaps the value of two integers using a temporary
 * variable to hold one of the values during the swap process.
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
