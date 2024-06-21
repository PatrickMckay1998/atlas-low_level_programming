#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d -> name == NULL)
    {
        printf("Name: (nil)\n");
    }
    else if (d -> age == 0)
    {
        printf("Age: (nil)\n");
    }
    else if (d -> owner == NULL)
    {
        printf("Owner: (nil)\n");
    }

    printf("Name: %s\n", d -> name);
    printf("Age: %f\n", d -> age);
    printf("Owner: %s\n", d -> owner);
}