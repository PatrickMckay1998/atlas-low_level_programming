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
        printf("Name: %s\n", d -> name);
    }
    
    printf("Age: \n", d -> age);
    
    /*if  (d -> age == 0)
    {
        printf("Age: \n", d);
    }
    else
    {
        printf("Age: %f\n", d -> age);
    }*/



    if (d -> owner == NULL)
    {
        printf("Owner: (nil)\n");
    }
    else 
    {
        printf("Owner: %s\n", d -> owner);
    }
    return;
}