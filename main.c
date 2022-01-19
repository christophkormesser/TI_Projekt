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
#include "shared/create_array.h"

int main(void) {
    srand(time(NULL));
	printf("sorting algo\n");


	merge_sort();
    short *short_array = create_arrray(8);
    short *medium_array = create_arrray(16);
    short *large_array = create_arrray(64);

    insertion_sort(short_array);

    bubble_sort(short_array, 10);

    free(short_array);
    free(medium_array);
    free(large_array);
	return 0;
}
