#include "helpers.h"

int factorial(int x)
{
    if(x<=0)
    {
        return 1;
    }
    else
    {
        return x*factorial(x-1);
    }
}

int addition(int x, int y)
{
    return x + y;
}

int subtraction(int x, int y)
{
    return x-y;
}

int multiplication(int x, int y)
{
    return x*y;
}

int division(int x, int y)
{
    return x/y;
}