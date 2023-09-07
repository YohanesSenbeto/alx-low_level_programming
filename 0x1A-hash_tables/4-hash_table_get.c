#include "hash_tables.h"

/**
 * hash_table_get - function to retrieve value associated with key
 * @ht: pointer to hash table
 * @key: key to retrieve value
 *
 * Return: value or NULL if key does not exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index = 0;
    hash_node_t *bucket;

    if (!ht || !key || !*key)
        return NULL;

    index = key_index((const unsigned char *)key, ht->size);
    bucket = ht->array[index];

    for (; bucket != NULL; bucket = bucket->next)
    {
        if (!strcmp(key, bucket->key))
            return bucket->value;
    }

    return NULL;
}
