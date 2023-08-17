#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: first node
 * @idx: index to insert at
 * @n: new node index
 *
 * Return: new node pointer, NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node = NULL;
    dlistint_t *current_node;
    unsigned int current_idx = 0;

    if (idx == 0)
    {
        new_node = add_dnodeint(h, n);
    }
    else
    {
        current_node = *h;

        if (current_node != NULL)
        {
            while (current_node->prev != NULL)
                current_node = current_node->prev;
        }

        while (current_node != NULL)
        {
            if (current_idx == idx)
            {
                if (current_node->next == NULL)
                {
                    new_node = add_dnodeint_end(h, n);
                }
                else
                {
                    new_node = malloc(sizeof(dlistint_t));

                    if (new_node != NULL)
                    {
                        new_node->n = n;
                        new_node->next = current_node->next;
                        new_node->prev = current_node;
                        current_node->next->prev = new_node;
                        current_node->next = new_node;
                    }
                }
                break;
            }
            current_node = current_node->next;
            current_idx++;
        }
    }
    return new_node;
}

