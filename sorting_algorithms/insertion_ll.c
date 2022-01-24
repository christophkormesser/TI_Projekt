//
// Created by Christoph Kormesser on 23.01.22.
//

#include "insertion_ll.h"

void insertion_ll(short *array, int length){

    printf("\n\nAAAAAAA");
    short *new = copy_array(array, length);

    int i, j;
    short key;
    for (i = 1; i < 2048; i++) {
        key = new[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && new[j] > key) {
            new[j + 1] = new[j];
            j = j - 1;
        }
        new[j + 1] = key;
    }
    for(int q = 0; q < 2048; q++){
        printf("%hi\t", new[q]);
    }

}
