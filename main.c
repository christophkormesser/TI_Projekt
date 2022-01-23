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

    short *short_array = create_array(8);
    short *medium_array = create_array(16);
    short *large_array = create_array(64);
    short *bub2k_array = create_array(2000);

    //insertion_sort(short_array);

    printf("\n\n1. Bubble Sort - [8]\n");
    bubble_sort(large_array);
/*
    printf("2. Bubble Sort - [16]\n");
    bubble_sort(medium_array, 16);
    printf("3. Bubble Sort - [64]\n");
    bubble_sort(large_array, 64);
*/
   //bubble_sort_2k(bub2k_array, 2000);

	//merge_sort(short_array);

	//quick_sort(short_array, 8);

    free(short_array);
    free(medium_array);
    free(large_array);
    free(bub2k_array);

    printf("search algos\n");
	return 0;
}
