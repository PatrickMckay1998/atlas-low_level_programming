#include "main.h"

/*
* rev_string - reverses a string by replacing the beginning with the end
*
* @length: length of the string
* @i: is the counter
* @temp: becomes the placeholder for the end of the string to the beginning
* Return - Always 0
*
*/


void rev_string(char *s)
{
int length = 0;
int i;
char temp;
while (s[length] != '\0')
{
length++;
}
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
