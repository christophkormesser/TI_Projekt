//
// Created by Christoph Kormesser on 19.01.22.
//

#include "copy_array.h"

short *copy_arrray(short *array){
    short *cpy_array = malloc(sizeof(*array));
    printf("\ncopied array:\n[  ");
    int i = 0;
    int n = sizeof(array);

    while(i < n){
        cpy_array[i] = array[i];
        printf("%hi\t", cpy_array[i]);
        i++;
    }
    printf("]");

    return cpy_array;
}
