#include <stdio.h>
#include <stdlib.h>
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

int* arrayInput(int x)
{
    int *arr, i;

    arr = (int *)malloc(x*sizeof(int));

    for(i=0; i<x; i++)
    {
        printf("Enter element number %d: \n", i+1);
        scanf("%d", arr+i);
    }

    return arr;
}