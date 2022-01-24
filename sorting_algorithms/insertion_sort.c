//
// Created by Christoph Kormesser on 05.01.22.
//

#include "insertion_sort.h"


double insertion_sort(short *array, int length){
    printf("\n==Insertion Sort==\n");
    // measure runtime
    clock_t start_t, end_t;
    double total_t;
    start_t = clock();

    printf("\n\n");
    short *new = copy_array(array, length);



    int i, j;
    short key;

    for (i = 1; i < length; i++) {
        key = new[i];
        j = i - 1;


        while (j >= 0 && new[j] > key) {
            new[j + 1] = new[j];
            j = j - 1;
        }
        new[j + 1] = key;
    }

    end_t = clock();

    total_t = (double)(end_t - start_t)/CLOCKS_PER_SEC;
    printf("\nRuntime: %lf seconds\n", total_t);
    for(int q = 0; q < (int)sizeof(new); q++){
        printf("%hi ", new[q]);
    }

    free(new);
    return total_t;
}
