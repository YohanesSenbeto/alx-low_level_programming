#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @x: the character to check
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int x)
{
    if (x >= 65 && x <= 90)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
