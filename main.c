/*
 * main.c
 *
 *  Created on: 18 Dec 2021
 *      Author: jd
 */

#include <stdio.h>
#include <time.h>
#include "sorting_algorithms/merge_sort.h"
#include "sorting_algorithms/insertion_sort.h"
#include "sorting_algorithms/bubble_sort.h"
#include "sorting_algorithms/bubble_sort_2k.h"
#include "sorting_algorithms/quick_sort.h"
#include "shared/create_array.h"

int main(void) {
	printf("sorting algos\n");
    srand(time(NULL));

    int min = -32767;
    int max = 32767;

    short *short_array = create_array(8, min, max, ASC);
    short *medium_array = create_array(8, min, max, DSC);
    short *large_array = create_array(64, min, max, RANDOM);
    short *bub2k_array = create_array(2000, min, max, RANDOM);

    double ins_runtime = insertion_sort(short_array, 8);

    printf("\n\n1. Bubble Sort - [8]\n");
    bubble_sort(large_array);

    merge_sort(short_array, 64);
/*
    printf("2. Bubble Sort - [16]\n");
    bubble_sort(medium_array, 16);
    printf("3. Bubble Sort - [64]\n");
    bubble_sort(large_array, 64);
*/
   bubble_sort_2k(bub2k_array, 2000);


	quick_sort(short_array, 8);

    free(short_array);
    free(medium_array);
    free(large_array);
    free(bub2k_array);

    printf("\nRUNTIMES\n------\n");
    printf("Insertion Sort: %lf secs\n", ins_runtime);
    printf("Bubble Sort: \n");
    printf("Merge Sort: \n");
    printf("Quick Sort: \n");

    printf("search algos\n");
	return 0;
}
