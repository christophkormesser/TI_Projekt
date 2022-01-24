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

    short min = -32767;
    short max = 32767;

    /*
    short *small_array = create_array(8, min, max, RANDOM);
    short *medium_array = create_array(16, min, max, RANDOM);
    short *large_array = create_array(64, min, max, RANDOM);

    double ins_runtime_small = insertion_sort(small_array, 8);
    double ins_runtime_medium = insertion_sort(medium_array, 16);
    double ins_runtime_large = insertion_sort(large_array, 64);

    // BUBBLE SORT:
    double bub_runtime_small = bubble_sort(small_array, 8);
    double bub_runtime_medium = bubble_sort(medium_array, 16);
    double bub_runtime_large = bubble_sort(large_array, 64);
    //printf("\n\n1. Bubble Sort - [8]\n");
    //bubble_sort(large_array);

    // QUICK SORT:
    double qs_runtime_small = quick_sort(small_array, 8);
    double qs_runtime_medium = quick_sort(medium_array, 16);
    double qs_runtime_large = quick_sort(large_array, 64);

    // MERGE SORT:
    double ms_runtime_small = merge_sort(small_array, 8);
    double ms_runtime_medium = merge_sort(medium_array, 16);
    double ms_runtime_large = merge_sort(large_array, 64); */

    short *bub2k_ran_array = create_array(2000, min, max, RANDOM);
    short *bub2k_asc_array = create_array(2000, min, max, ASC);
    short *bub2k_dsc_array = create_array(2000, min, max, DSC);

/*
    printf("2. Bubble Sort - [16]\n");
    bubble_sort(medium_array, 16);
    printf("3. Bubble Sort - [64]\n");
    bubble_sort(large_array, 64);
*/

    double bs2k_runtime_ran = bubble_sort_2k(bub2k_ran_array, 2000);
    double bs2k_runtime_asc = bubble_sort_2k(bub2k_ran_array, 2000);
    double bs2k_runtime_dsc = bubble_sort_2k(bub2k_ran_array, 2000);

    /*
    free(small_array);
    free(medium_array);
    free(large_array); */
    free(bub2k_ran_array);
    free(bub2k_asc_array);
    free(bub2k_dsc_array);

    printf("\n\nRUNTIMES\n------\n"); /*
    printf("Insertion Sort small: %lf secs\n", ins_runtime_small);
    printf("Insertion Sort medium: %lf secs\n", ins_runtime_medium);
    printf("Insertion Sort large: %lf secs\n", ins_runtime_large);

    printf("Bubble Sort small: %lf secs\n", bub_runtime_small);
    printf("Bubble Sort medium: %lf secs\n", bub_runtime_medium);
    printf("Bubble Sort large: %lf secs\n", bub_runtime_large);

    printf("Quick Sort small: %lf secs\n", qs_runtime_small);
    printf("Quick Sort medium: %lf secs\n", qs_runtime_medium);
    printf("Quick Sort large: %lf secs\n", qs_runtime_large);

    printf("Merge Sort small: %lf secs\n", ms_runtime_small);
    printf("Merge Sort medium: %lf secs\n", ms_runtime_medium);
    printf("Merge Sort large: %lf secs\n", ms_runtime_large); */

    printf("Merge Sort small: %lf secs\n", bs2k_runtime_ran);
    printf("Merge Sort medium: %lf secs\n", bs2k_runtime_asc);
    printf("Merge Sort large: %lf secs\n", bs2k_runtime_dsc);

    printf("search algos\n");
	return 0;
}
