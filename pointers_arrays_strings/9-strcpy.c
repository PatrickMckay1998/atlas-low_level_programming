#include "main.h"



char *_strcpy(char *dest, char *src)
{
char *orig_dest = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return orig_dest;
}
