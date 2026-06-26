#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

intArr *create_int_array(int n)
{
    int i;
    intArr *arr;

    arr = (intArr *)malloc(sizeof(intArr));

    if(arr == NULL)
    {
        return NULL;
    }

    arr->data = malloc(n*sizeof(int));

    if(arr->data == NULL)
    {
        free(arr);
        return NULL;
    }

    arr->size = n;

    for(i=0; i<n; i++)
    {
        printf("Enter element number:%d :\n");
        scanf("%d", arr->data + i);
    }

    return arr;
}