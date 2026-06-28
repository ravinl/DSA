#include <stdio.h>
#include "../helper.h"

int maximum_of_all(intArr *);

int main()
{
    int arr_length;
    intArr *array;

    arr_length = ask_for_arr_size();

    array = create_int_array(arr_length);

    int result = maximum_of_all(array);
    printf("Maximum among provided number is: %d", result);

    return 0;
}

int maximum_of_all(intArr *array)
{
    int i,maximum;

    for(i=0; i<array->size;i++)
    {
        if(i==0)
        {
            maximum = array->data[i];
        }
        else if(maximum<array->data[i])
        {
            maximum=array->data[i];
        }
    }

    return maximum;
}