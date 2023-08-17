#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index from doubly linked list
 * @head: first node
 * @index: index of node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current_node = *head;
    dlistint_t *previous_node = NULL;
    unsigned int current_index = 0;

    if (current_node != NULL)
    {
        while (current_node->prev != NULL)
            current_node = current_node->prev;
    }

    while (current_node != NULL)
    {
        if (current_index == index)
        {
            if (current_index == 0)
            {
                *head = current_node->next;
                if (*head != NULL)
                    (*head)->prev = NULL;
            }
            else
            {
                previous_node->next = current_node->next;

                if (current_node->next != NULL)
                    current_node->next->prev = previous_node;
            }
            free(current_node);
            return 1;
        }
        previous_node = current_node;
        current_node = current_node->next;
        current_index++;
    }

    return -1;
}

