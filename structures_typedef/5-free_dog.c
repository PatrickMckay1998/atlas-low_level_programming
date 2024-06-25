#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void free_dog(dog_t *d)
{

if (d->age == 0)
{
printf("%d", 0);
}

free(d->name);
free(d->owner);

}
