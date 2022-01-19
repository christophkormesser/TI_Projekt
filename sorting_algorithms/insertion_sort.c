//
// Created by Christoph Kormesser on 05.01.22.
//

#include "insertion_sort.h"


int insertion_sort(short *array){
    printf("\n\n");
    short *new = copy_array(array);
    short *sorted = malloc(sizeof(new));

    short smallest = SHRT_MAX;

    // get the smallest number of every loop
    // the smallest number found will be changed to SHRT_MAX so it won't be picked again
    for(int e = 0; e < (int)sizeof(new); e++){
        for(int i = 0; i < (int)sizeof(new); i++){
            if(new[i] < smallest){
                smallest = new[i];
            }
        }
        for(int u = 0; u < (int)sizeof(new); u++){
            // if current element is the smallest of the current array state, increase it
            if(new[u] == smallest){
                new[u] = SHRT_MAX;
            }
        }
        sorted[e] = smallest;
        smallest = SHRT_MAX;
    }

    printf("\nSorted:::\n");
    for(int q = 0; q < (int)sizeof(sorted); q++){
        printf("%hi\t", sorted[q]);
    }

    return 0;
}
