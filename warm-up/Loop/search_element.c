#include <stdio.h>
#include "../../helpers.h"

void main()
{
    int n, *arrPtr, i;
    printf("Enter the number of elements, you want to add in an array: \n");
    scanf("%d", &n);

    arrPtr = arrayInput(n);

    int foundElementIndex = searchElement(arrPtr);

    if(foundElementIndex == -1)
    {
        printf("No element found");
    } else
    {
        printf("Element found at index: %d", foundElementIndex);
    }
}

int searchElement(int *ptr)
{
    int searchingFor, i;
    int lengthOfArray = sizeof(ptr)/sizeof(*ptr);

    printf("Enter a number you want to search: \n");
    scanf("%d", &searchingFor);

    for(i=0; i<lengthOfArray; i++)
    {
        if(*(ptr+i) == searchingFor)
        {
            return i;
        }
    }

    return -1;
}