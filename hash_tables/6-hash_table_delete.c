#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Description: Frees all memory associated with the hash table, including
 *              all nodes, their keys and values, the array of pointers,
 *              and the hash table structure itself.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *node, *temp;
    unsigned long int i;

    if (ht == NULL)
        return;

    /* Iterate through each index of the hash table's array */
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        /* Free all nodes in the linked list at this index */
        while (node != NULL)
        {
            temp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = temp;
        }
    }

    /* Free the array of pointers */
    free(ht->array);

    /* Free the hash table structure itself */
    free(ht);
}