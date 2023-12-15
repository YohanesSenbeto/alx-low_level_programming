#include <stdio.h>
#include "search_algos.h"

/**
* advanced_binary - Searches sorted array using advanced binary search
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Return: Index of first occurrence of 'value' in 'array', or -1 if not found
*/
int advanced_binary(int *array, size_t size, int value)
{
if (array == NULL || size == 0)
{
return (-1);
}

size_t left = 0, right = size - 1, mid;
int result = -1;

while (left <= right)
{
printf("Searching in array: ");
for (size_t i = left; i <= right; ++i)
{
printf("%d", array[i]);
if (i < right)
{
printf(", ");
}
}
printf("\n");

mid = left + (right - left) / 2;

if (array[mid] == value)
{
result = mid;
right = mid - 1;
}
else if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}

return (result);
}

