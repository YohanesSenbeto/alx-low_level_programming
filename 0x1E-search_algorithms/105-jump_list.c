#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_list - Searches for a value in a sorted linked list using Jump search
* @list: A pointer to the head of the sorted linked list to search in
* @size: The number of nodes in the list
* @value: The value to search for
*
* Return: A pointer to the first node where value is located,
*         or NULL if the value is not present or the list is empty
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
if (list == NULL || size == 0)
{
return (NULL);
}

size_t jump = sqrt(size);
listint_t *current = list;
listint_t *prev = NULL;
int a, b;

while (current && current->n < value)
{
prev = current;
for (size_t i = 0; i < jump && current->next != NULL; i++)
{
current = current->next;
}
printf("Value checked at index [%d] = [%d]\n", (int)current->n, current->n);
}

if (current && current->n == value)
{
a = prev ? prev->n : 0;
b = current->n;
printf("Value found between indexes [%d] and [%d]\n", a, b);
return (current);
}

printf("Value checked at index [%d] = [%d]\n", (int)current->n, current->n);
printf("Value was not found\n");
return (NULL);
}
