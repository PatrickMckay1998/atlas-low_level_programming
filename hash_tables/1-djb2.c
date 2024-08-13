#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 hash function
 * @str: The string to be hashed
 *
 * Description: This function implements the djb2 algorithm, a popular
 *              and efficient hash function created by Dan Bernstein.
 *              It processes each character of the input string and
 *              generates a unique hash value.
 *
 * Return: The computed hash value for the given string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;

hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) +c;
}
return (hash);
}
