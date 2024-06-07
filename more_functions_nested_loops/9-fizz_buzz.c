#include <stdio.h>

int main(void)
{
    int m;
    for(m = 1; m <= 100; m++)
    {
        if (m % 3)
        {
            printf("Fizz");
        }
        if (m % 5)
        {
            printf("Buzz");
        }
        if (m % 3 && m % 5)
        {
            printf("FizzBuzz")
        }
        else 
        {
            printf("%d", m);
        }
    }
    return (0);
}

