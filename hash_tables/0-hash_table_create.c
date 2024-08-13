#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: The size of the hash table (number of buckets)
 *
 * Description: This function allocates memory for a hash table structure
 *              and its internal array of pointers. It also initializes each
 *              pointer in the array to NULL.
 *
 * Return: A pointer to the newly created hash table, or NULL if memory
 *         allocation fails.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *hash_table;
unsigned long int i;

/* Allocate memory for the hash table structure */
hash_table = malloc(sizeof(hash_table_t));
if (hash_table == NULL)
return (NULL);

/* Set the size of the hash table */
hash_table->size = size;

/* Allocate memory for the array of pointers to hash_node_t */
hash_table->array = calloc(size, sizeof(hash_node_t *));
if (hash_table->array == NULL)
{
free(hash_table); /* Free the allocated memory for the structure */
return (NULL);
}

/* Initialize each element of the array to NULL */
for (i = 0; i < size; i++)
hash_table->array[i] = NULL;

return (hash_table);
}
