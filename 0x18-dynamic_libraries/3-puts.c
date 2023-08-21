#include "main.h"

/**
 * _puts - prints a string followed by a newline
 * @str: input string
 */
void _puts(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        /* print each character of the string */
        _putchar(str[i]);
    }
    /* print a newline character at the end */
    _putchar('\n');
}
