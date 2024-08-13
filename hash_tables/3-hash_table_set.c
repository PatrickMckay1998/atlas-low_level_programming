#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node, *current_node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}

index = key_index((const unsigned char *)key, ht->size);

current_node = ht->array[index];

/* Update value if key already exists */
while (current_node != NULL)
{
if (strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = strdup(value);
if (current_node->value == NULL)
{
return (0);
}

return (1);
}
current_node = current_node->next;
}

/* Create a new node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (0);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (0);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (0);
}

/* Add the new node at the beginning of the list */
new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
