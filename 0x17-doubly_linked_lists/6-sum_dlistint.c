#include "lists.h"

/**
 * sum_dlistint - return sum of data in linked list
 * @head: first node
 * Return: total
 */
int sum_dlistint(dlistint_t *head)
{
    int total = 0;
    dlistint_t *current = head;

    while (current != NULL)
    {
        total += current->n;
        current = current->next;
    }

    return total;
}

