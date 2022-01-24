//
// Created by Christoph Kormesser on 19.01.22.
//

#include "copy_array.h"

short *copy_array(short *array, int length){

    short *cpy_array = (short *)malloc(sizeof(short) * length);
    if(cpy_array == NULL){
        fprintf(stderr, "copy array: Out of Memory!");
        exit(1);
    }
    printf("SIZEOF ARRAY: %d", length);
    printf("\ncopied array:\n[  ");
    int i = 0;
    //int n = sizeof(array);

    while(array[i] != '\0'){
        cpy_array[i] = array[i];
        printf("%hi ", cpy_array[i]);
        i++;
    }
    printf("]");

    return cpy_array;
}
