#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted array of integers
*               using the Jump search algorithm
* @array: pointer to the first element of the array to search in
* @size: number of elements in @array
* @value: value to search for
*
* Return: first index where @value is located, or -1 if @value is not present
*/
int jump_search(int *array, size_t size, int value)
{
int step, prev, i;

if (array == NULL || size == 0)
return (-1);

step = (int)sqrt(size);
prev = 0;

while (1)
{
if (step >= (int)size || array[step] >= value)
break;

printf("Value checked array[%d] = [%d]\n", step, array[step]);
prev = step;
step += sqrt(size);
}

printf("Value found between indexes [%d] and [%d]\n", prev, step);

for (i = prev; i <= step && i < (int)size; ++i)
{
printf("Value checked array[%d] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
