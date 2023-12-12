#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - Searches for value in an array using linear search algorithm
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in the array
* @value: Value to search for
*
* Description: This function searches for a specific value in an array using
* the linear search algorithm. It iterates through each element of the array
* and compares it to the given value. If the value is found, the function
* returns the index of the first occurrence of the value in the array. If the
* value is not found or if the array is NULL, the function returns -1.
*
* Return: The index of the value if found, otherwise -1
*/
int linear_search(int *array, size_t size, int value)
{
if (array == NULL)
return (-1);

for (size_t i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}

return (-1);
}
