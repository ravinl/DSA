#include <stdio.h>
#include <stdlib.h>
#include "helper.h"

int ask_for_arr_size()
{
    int n;
    
    printf("Enter the number of elements:\n");
    scanf("%d", &n);

    return n;
}

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
        printf("Enter element number:%d :\n", i);
        scanf("%d", arr->data + i);
    }

    return arr;
}