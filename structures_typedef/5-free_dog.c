#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to a dog_t struct to be freed
 *
 * Description: This function frees the memory allocated for the name and owner
 * members of a dog_t struct. If the age of the dog is 0, it prints 0 before
 * freeing the memory.
 *
 * Return: This function does not return a value.
 */

void free_dog(dog_t *d)
{

if (d->age == 0)
{
printf("%d", 0);
}

free(d->name);
free(d->owner);

}
