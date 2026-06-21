#include <stdio.h>

int maxOfThree(int, int, int);

void main()
{
    int x,y,z,result;

    printf("Enter three numbers to compare \n");
    printf("Enter first number");
    scanf("%d", &x);
    printf("Enter second number");
    scanf("%d", &y);
    printf("Enter third number");
    scanf("%d", &z);

    result = maxOfThree(x,y,z);

    if(result)
    {
        printf("Maximum among %d %d %d is: %d", x,y,z,result);
    }
    else
    {
        printf("Enter three distinct numbers to compare fairely");
    }
}

int maxOfThree(int a, int b, int c)
{
    int max;

    if(a>b)
    {
        if(a>c)
        {
            max = a;
        }
        else
        {
            if(c>a)
            {
                max = c;
            }
            else
            {
                max = 0;
            }
        }
    }
    else
    {
        if(b>a)
        {
            if(b>c)
            {
                max = b;
            }
            else
            {
                if(c>b)
                {
                    max = c;
                }
                else
                {
                    max = 0;
                }
            }
        }
        else
        {
            max = 0;
        }
    }

    return max;
}