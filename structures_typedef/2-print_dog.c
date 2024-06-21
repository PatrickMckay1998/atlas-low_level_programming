#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d -> name == 'NULL')
    {
        printf("Name: (nil)");
    }
    else if (d -> age == 'NULL')
    {
        printf("Age: (nil)");
    }
    else if (d -> owner == 'NULL')
    {
        printf("Owner: (nil)");
    }

    printf("Name: %c\n", d -> name);
    printf("Age: %f\n", d -> age);
    prinft("Owner: %c\n", d -> owner);
}