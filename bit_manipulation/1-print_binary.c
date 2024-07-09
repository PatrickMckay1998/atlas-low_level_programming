#include <stdio.h>
#include "main.h"

void print_binary(unsigned long int n);

int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}

void print_binary(unsigned long int n)
{   
    char* binary;

    int i;

    while(n) {
        binary[i++] = '0' + (n & 1);
        n >>= 1;
    }
    binary[i] = '\0';
    return;
}
