#include <stdio.h>
#include "../../type.h"

void table(int);

void main()
{
    int x;

    printf("Enter a positive integer, whose table you want to print");
    scanf("%d", &x);

    table(x);

    printf("NOTE: If the entered number is not integer, then it will print the table of floor value of entered number");
}

void table(int n)
{
    int i;

    for(i=1; i<=10; i++)
    {
        printf("%d*%d=%d", n, i, (n*i));
        printf("\n");
    }
}