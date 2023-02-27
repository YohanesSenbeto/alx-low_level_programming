#include "main.h"

/**
 * swap two integers - function that swaps the values of two integers.
 * @n: swap two int a & b
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int c;

      c = *a;
     *a = *b;
     *b = c;

}
