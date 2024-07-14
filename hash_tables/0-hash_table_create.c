#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = (hash_table_t*) malloc (sizeof(hash_table_t));
    /* Create a new hash table, I think. */
    hash_table->size = size;
    /* Set the size of our new table to the size provided */
    return (*hash_table);
    /* Return the a pointer to the new hash_table */
}