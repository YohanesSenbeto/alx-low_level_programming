#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: The string to be searched
 * @c: The character to be located
 * Return: Always 0 (Success
 */
char *_strchr(char *s, char c)
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == c)
            return (s + i);
    }

    return (NULL);
}
