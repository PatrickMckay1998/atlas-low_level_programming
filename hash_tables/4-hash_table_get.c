#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table
 * @ht: The hash table to look into
 * @key: The key you are looking for
 *
 * Return: The value associated with the key, or NULL if the key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *node;

/* Check for invalid input */
if (ht == NULL || key == NULL || *key == '\0')
return (NULL);

/* Calculate the index for the key using the key_index function */
index = key_index((const unsigned char *)key, ht->size);

/* Traverse the linked list at the computed index */
node = ht->array[index];
while (node != NULL)
{
/* If the key is found, return the associated value */
if (strcmp(node->key, key) == 0)
return (node->value);

node = node->next;
}

/* If the key wasn't found, return NULL */
return (NULL);
}
