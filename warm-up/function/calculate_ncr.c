#include <stdio.h>
#include "../../helpers.h"

int nCr(int, int);

void main()
{
    int n,r=0;
    printf("Enter the value of n");
    scanf("%d", &n);
    printf("Enter the value of r");
    scanf("%d", &r);

    int result = nCr(n,r);

    printf("%d C %d = %d", n,r,result);
}

int nCr(int n, int r)
{
    return factorial(n)/(factorial(r)*(factorial(n-r)));
}