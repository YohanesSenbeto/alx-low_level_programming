#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 * Description: This function frees a hash table and all of its nodes.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *bucket, *aux_free;
    unsigned long int i = 0;

    if (!ht)
        return;

    for (i = 0; i < ht->size; i++)
    {
        bucket = ht->array[i];
        for (; bucket; bucket = bucket->next)
        {
            aux_free = bucket;
            if (aux_free->key)
                free(aux_free->key);
            if (aux_free->value)
                free(aux_free->value);
            free(aux_free);
        }
    }

    free(ht->array);
    free(ht);
}
