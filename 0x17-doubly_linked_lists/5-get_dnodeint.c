#include "lists.h"

/**
 * get_dnodeint_at_index - get the node of a linked list
 * @head: the head of the list
 * @index: index
 * Return: node at the nth index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    dlistint_t *current_node = head;
    unsigned int current_index = 0;

    while (current_node != NULL)
    {
        if (current_index == index)
            return current_node;

        current_node = current_node->next;
        current_index++;
    }

    return NULL;
}

