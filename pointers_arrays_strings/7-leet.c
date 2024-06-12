#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet) speak
 * @nico: The string to be encoded
 *
 * Description: This function takes a string and encodes it into leet speak
 * by replacing certain letters with corresponding numbers. The replacements
 * are as follows:
 * - 'a' and 'A' are replaced by '4'
 * - 'e' and 'E' are replaced by '3'
 * - 'o' and 'O' are replaced by '0'
 * - 't' and 'T' are replaced by '7'
 * - 'l' and 'L' are replaced by '1'
 *
 * Return: The encoded string
 */

char *leet(char *nico)
{
char *ptr = nico;
char brax[10] = "aAeEoOtTlL";
char tiny[10] = "4433007711";
int m;
while (*ptr != '\0')
{
for (m = 0; m <= 10; m++)
{
if (*ptr == brax[m])
{
*ptr = tiny[m];
break;
}
}
ptr++;
}
return nico;
}
