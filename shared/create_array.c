//
// Created by Christoph Kormesser on 06.01.22.
//

#include "create_array.h"
#include "random_number.h"

// #define MAX_INT 65536 // we subtract 32768 later, so we can create random negative numbers too

// short int:       -32.767 - 32.767
// unsigned int:    0 - 65.535
short *create_array(unsigned int size, int min, int max){
    short *array = malloc(sizeof(short) * size);
    printf("\nUnsorted array:\n[  ");
    for(unsigned int i = 0; i < size; i++){
        array[i] = random_number(min, max);
        printf("%hi  ", array[i]);
    }

    /*
    int random_number(int min, int max) {
    	int num = rand() % (max-min) + min;
    	return num;
    }

    void print_array(int l, int *a, char t[]) {
    	printf("Print List\n");
    	for (int i = 0; i < l; i += 1) {
    		printf("%s %4d ", t, a[i]);
    	}
    	printf("\n");
    } */
    printf("]");

    return array;
}
