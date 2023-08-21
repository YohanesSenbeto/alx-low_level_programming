#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @ab: Integer input.
 *
 * Return: Absolute value of ab.
 */
int _abs(int ab)
{
    return (ab * ((ab > 0) - (ab < 0)));
}
