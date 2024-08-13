#include "hash_tables.h"

/**
 * key_index - Gives the index of a key for a hash table
 * @key: The key (a string) to be hashed
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored in the array
 *         of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
