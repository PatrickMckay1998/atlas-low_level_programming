#include "main.h"

int _sqrt_helper(int n, int i)
{
        return -1;
    if (i * i == n)
        return i;
    return _sqrt_helper(n, i + 1);
}

int _sqrt_recursion(int n)
{
    if (n < 0)  // Natural square root does not exist for negative numbers
        return -1;
    return _sqrt_helper(n, 0);  // Start the helper function with 0 as the initial divisor
}