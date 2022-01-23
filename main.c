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
#include "sorting_algorithms/quick_sort.h"
#include "shared/create_array.h"

int main(void) {
	printf("sorting algos\n");
    srand(time(NULL));

    short *short_array = create_array(8);
    short *medium_array = create_array(16);
    short *large_array = create_array(64);

    insertion_sort(short_array, 8);

    bubble_sort(short_array, 8);

	merge_sort(short_array);

	quick_sort(short_array, 8);

    free(short_array);
    free(medium_array);
    free(large_array);

    printf("search algos\n");
	return 0;
}
