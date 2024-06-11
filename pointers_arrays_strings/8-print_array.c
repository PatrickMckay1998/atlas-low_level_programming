#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: The array of integers
 * @n: The number of elements to be printed
 *
 * Description: This function takes an array of integers and an integer n
 * and prints the first n elements of the array, followed by a new line.
 * The elements are separated by commas and a space.
 *
 * Return: void
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
