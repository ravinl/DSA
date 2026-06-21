#include <stdio.h>

int reverseDigit(int);

void main()
{
    int x, result;

    printf("Enter a number to get it's reverse");
    scanf("%d", &x);

    result = reverseDigit(x);

    printf("Reverse of %d is %d", x, result);
}

int reverseDigit(int x)
{
    int i, result = 0, r;

    while(x != 0)
    {
        r = x % 10;
        result = result * 10 + r;
        x /= 10;
    }

    return result;
}