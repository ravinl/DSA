#include <stdio.h>
#include "../../type.h"

int oddEven(int);

void main()
{
    int x;

    printf("Enter a number, to check whether it is odd or even");
    scanf("%d", &x);

    int result = oddEven(x);

    if(result == 1)
    {
        printf("%d is Even number", x);
    }
    else
    {
        printf("%d is odd number", x);
    }
}

int oddEven(int n)
{
    int result;

    if(n%2==0)
    {
        result = 1;
        return result;
    }
    else
    {
        result = 0;
        return result;
    }
}