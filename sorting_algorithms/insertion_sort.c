//
// Created by Christoph Kormesser on 05.01.22.
//

#include "insertion_sort.h"


int insertion_sort(short *array, int length){
    printf("\n\n");
    short *new = copy_array(array);



    int i, j;
    short key;
    for (i = 1; i < length; i++) {
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

    printf("\nInsertion Sort:\n");
    for(int q = 0; q < (int)sizeof(new); q++){
        printf("%hi\t", new[q]);
    }

    return 0;
}
