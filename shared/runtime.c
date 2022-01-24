#include "runtime.h"
#include "create_array.h"
#include "../sorting_algorithms/insertion_sort.h"

void check_runtime(int size) {
    clock_t start_time;
    clock_t end_time;
    Node *head = NULL;
    clock_t time_array[4];

    short min = -32767;
    short max = 32767;
    short *array = (short *) malloc(size * sizeof(short));

    // init time array
    start_time = clock();
    // fill_array_with_random_values(array, size);
    array = create_array(size, min, max, RANDOM);
    end_time = clock();
    time_array[0] = end_time - start_time;
    // init time list
    start_time = clock();
    fill_linkedlist_with_random_values(&head, size);
    end_time = clock();
    time_array[1] = end_time - start_time;

    // free list
    free_list(head);
    head = NULL;

    // copy array values to list
    for (int i = size; i > 0; i--){
        push(&head, array[i - 1]);
    }

    // show that array and list key have the same values
    // and are not sorted

    // sort time array (insertionsort)
    start_time = clock();
    insertion_sort(array, size);
    end_time = clock();
    time_array[2] = end_time - start_time;
    // sort time list (insertionsort)
    start_time = clock();
    insertionsort_linkedlist(&head);
    end_time = clock();
    time_array[3] = end_time - start_time;

    // table
    printf("%18carray%9clist\n", ' ', ' ');
    printf("%5cinit%4c%.8f%3c%.8f\n", ' ', ' ', (double) time_array[0] / CLOCKS_PER_SEC, ' ',
           (double) time_array[1] / CLOCKS_PER_SEC);
    printf("%5csort%4c%.8f%3c%.8f\n", ' ', ' ', (double) time_array[2] / CLOCKS_PER_SEC, ' ',
           (double) time_array[3] / CLOCKS_PER_SEC);

    // free list
    free_list(head);
    head = NULL;
    free(array);
}
