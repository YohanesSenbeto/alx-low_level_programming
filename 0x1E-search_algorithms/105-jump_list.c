/*
 * File: 105-jump_list.c
 * Auth: Yohanes senbeto Kankure
 */

#include "search_algos.h"

/**
 * jump_list - Searches for the algorithm in a sorted singly
 *             linked list of the integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump steps.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t steps, steps_size;
    listint_t *node, *jump;

    if (list == NULL || size == 0)
        return (NULL);

    steps = 0;
    steps_size = sqrt(size);
    for (node = jump = list; jump->index + 1 < size && jump->n < value;)
    {
        node = jump;
        for (steps += steps_size; jump->index < steps; jump = jump->next)
        {
            if (jump->index + 1 == size)
                break;
        }
        printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
    }

    printf("Value found between indexes [%ld] and [%ld]\n",
           node->index, jump->index);

    for (; node->index < jump->index && node->n < value; node = node->next)
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
    printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

    return (node->n == value ? node : NULL);
}
