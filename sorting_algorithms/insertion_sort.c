//
// Created by Christoph Kormesser on 05.01.22.
//

#include "insertion_sort.h"


double insertion_sort(short *array, int length){
    printf("\n\n==Insertion Sort==\n");
    // measure runtime
    clock_t start_t, end_t;
    double total_t;

    short *new = copy_array(array, length);


    start_t = clock();
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

void insertionsort_linkedlist(Node **head){
    // init sorted linked list
    Node *sorted = NULL;
    Node *current = *head;
    // go through unsorted list and insert every node into sorted list
    while (current != NULL){
        sorted_insert(&sorted, current->value);
        current = current->next;
    }
    *head = sorted;
}
