#include <stdio.h>

/* Function to add two numbers*/
int add(int a, int b)
{
    return (a + b);
}

/* Function to subtract two numbers*/
int sub(int a, int b)
{
    return (a - b);
}

/*Function to multiply two numbers*/
int mul(int a, int b)
{
    return (a * b);
}

/* Function to divide two numbers*/
int div(int a, int b)
{
    /*Check if the divisor is zero*/
    if (b == 0)
    {
        return (0);
    }
    return (a / b);
}

/* Function to calculate the remainder of division*/
int mod(int a, int b)
{
    /*Check if the divisor is zero*/
    if (b == 0)
    {
        return (0);
    }
    return (a % b);
}
