#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * largest_number - prints the largest of three integers
 * @a: firts integer
 * @b: second integer
 * @c: third integer
 * Return: larget integer
 */
int largest_number(int a, int b, int c)
{

    a = 972;
    b = -98;
    c = 0;
    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > a && b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);

}
/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}

