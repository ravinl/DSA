#include <stdio.h>
#include <stdlib.h>

#include "../../helpers.h"

void calculate(int);
int* takeOperand();
int add();
int sub();
int mul();
int divide();

void main()
{
    int response;

    printf("1. Addition \n 2. Subtraction \n 3. Multiplication \n 4. Division \n 5. Exit");
    printf("\nEnter your choice from given options: ");
    scanf("%d", &response);

    calculate(response);
}

int* takeOperand()
{
    static int input[2];

    printf("Enter first operand: ");
    scanf("%d", input);
    printf("Enter second number: ");
    scanf("%d", (input+1));

    return input;
}

int add()
{
    int *operands = takeOperand();
    printf("%d + %d = %d",*operands, *(operands+1), addition(*operands, *(operands+1)));
}

int sub()
{
    int *operands = takeOperand();
    printf("%d - %d = %d",*operands, *(operands+1), subtraction(*operands, *(operands+1)));
}

int mul()
{
    int *operands = takeOperand();
    printf("%d * %d = %d",*operands, *(operands+1), multiplication(*operands, *(operands+1)));
}

int divide()
{
    int *operands = takeOperand();
    printf("%d / %d = %d",*operands, *(operands+1), division(*operands, *(operands+1)));
}

void calculate(int request)
{
    switch (request)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mul();
        break;
    case 4:
        divide();
        break;
    case 5:
        exit(0);
        break;
    default:
    printf("Invalid response");
        break;
    }
}