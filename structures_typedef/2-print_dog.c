#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the name, age, and owner of a dog. If any
 * of the elements (name or owner) are NULL, it prints (nil) instead of the
 * respective element. The age is printed as a floating-point number.
 *
 * Return: This function does not return a value.
 */

void print_dog(struct dog *d)
{
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}

printf("Age: %f\n", d->age);

if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
return;
}
