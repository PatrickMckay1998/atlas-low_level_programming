#include <stdio.h>

int main(void)
{
    int m;
    for(m = 1; m <= 100; m++)
    {
        if (m / 3)
        {
            printf("Fizz");
            printf(" ");
        }
        if (m / 5)
        {
            printf("Buzz");
            printf(" ");
        }
        if (m / 3 && m / 5)
        {
            printf("FizzBuzz");
            printf(" ");
        }
        else 
        {
            printf("%d", m);
            printf(" ");
        }
    }
    return (0);
}

