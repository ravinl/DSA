#include <stdio.h>

int isPrime(int);

void main()
{
    int x;

    printf("Enter a number to check whether it is prime or not");
    scanf("%d", &x);

    int result = isPrime(x);

    if(result)
    {
        printf("%d is prime number", x);
    }
    else
    {
        printf("%d is non-prime number", x);
    }
}

int isPrime(int x)
{
    int i, prime = 1;

    for(i=2; i<x; i++)
    {
        if(x%i == 0)
        {
            return 0;
        }
    }

    return prime;
}