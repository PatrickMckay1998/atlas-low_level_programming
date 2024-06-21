#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d -> name == NULL)
    {
        printf("Name: (nil)");
    }
    else if (d -> age == 0)
    {
        printf("Age: (nil)");
    }
    else if (d -> owner == NULL)
    {
        printf("Owner: (nil)");
    }

    printf("Name: %s\n", d -> name);
    printf("Age: %f\n", d -> age);
    prinft("Owner: %s\n", d -> owner);
}