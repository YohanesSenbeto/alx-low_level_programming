// C program to print alphabets
#include <stdio.h>
void lowercaseAlphabets()
{
    for (int c = 97; c <= 122; ++c)
        putchar("%c ", c);
}
int main()
{
    putchar("Lowercase Alphabets\n");
    lowercaseAlphabets();

    return 0;
}

