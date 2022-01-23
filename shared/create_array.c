//
// Created by Christoph Kormesser on 06.01.22.
//

#include "create_array.h"

#define MAX_INT 65536 // we subtract 32768 later, so we can create random negative numbers too

// short int:       -32.767 - 32.767
// unsigned int:    0 - 65.535
short *create_array(unsigned int size){
    short *array = malloc(sizeof(short) * size);
    printf("\nUnsorted array:\n[  ");
    for(unsigned int i = 0; i < size; i++){
        array[i] = (rand() % MAX_INT) - 32767;
        printf("%hi  ", array[i]);
    }
    printf("]");

    return array;
}
