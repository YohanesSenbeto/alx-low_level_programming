#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key. (cannot be an empty string)
 * @value: The value associated with the key. (can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    index = hash_djb2((const unsigned char *)key) % ht->size;

    /* Create a new node and duplicate the key and value */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = (value != NULL) ? strdup(value) : NULL;

    if (new_node->value == NULL && value != NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Add the new node at the beginning of the list to handle collisions */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

