#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
    if (d -> name == NULL)
    {
        printf("Name: (nil)\n");
    }
    else 
    {
        printf("Name: %s", d -> name);
    }
    
    
    if  (d -> age == 0)
    {
        printf("Age: (nil)\n");
    }
    else
    {
        printf("Age: %f", d -> age);
    }



    if (d -> owner == NULL)
    {
        printf("Owner: (nil)\n");
    }
    else 
    {
        printf("Owner: %s", d -> owner);
    }
    return;
}