#include "main.h"

/**
 * string_toupper - function that changes lowercase string to uppercase.
 * @str : pointer
 * Return: pointer in return
 */

char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'a' && str[i] <= 'z')
{
str [i] -= 32;
}
}
return (str);
}
