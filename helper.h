#ifndef HELPER_H
#define HELPER_H

typedef struct{
    int *data;
    int size;
} intArr;

intArr *create_int_array(int);

#endif