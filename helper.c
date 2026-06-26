#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

intArr *create_int_array(int n)
{
    int i;
    intArr *arr;

    arr = (int *)malloc(n*sizeof(int));

    for(i=0; i<n; i++)
    {
        printf("Enter element %d", (i+1));
        scanf("%d", arr->data);
    }

    arr->size = n;

    return arr;
}