#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
int len1, len2;
char *cpy_name, *cpy_owner;

cpy_name = malloc(sizeof(name) + 1);
cpy_owner = malloc(sizeof(owner) + 1);

len1 = 0;
  
  while(name[len1])
  {
    cpy_name[len1] = name[len1];
    len1++;
  } /* obtains length of name and copies it to cpy_name */
  
  while (owner[len2])
  {
    cpy_owner[len2] = owner[len2];
    len2++;
  } /* obtaines length of owner and copies it to cpy_owner */
  return;
}
