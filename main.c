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
#include "shared/list_funcs.h"
#include "shared/runtime.h"
#include "shared/compare_list.h"
#include "shared/key_value_list.h"
#include "shared/runtime_list.h"

int main(void) {
    printf("\n!==DISCLAIMER==!\nEvery printed array is displayed with a maximum of 20 elements.\n\n");
	printf("sorting algos\n");
    srand(time(NULL));

    // short min = -32767;
    // short max = 32767;
    int array_2k = 2048;

    check_runtime(array_2k);

    short *small_array = create_array(8, -32767, 32767, RANDOM);
    short *medium_array = create_array(16, -32767, 32767, RANDOM);
    short *large_array = create_array(64, -32767, 32767, RANDOM);

    short *array_2k_ran = create_array(2048, -32767, 32767, RANDOM);
    short *array_2k_asc = create_array(2048, -32767, 32767, ASC);
    short *array_2k_dsc = create_array(2048, -32767, 32767, DSC);

    double ins_runtime_small = insertion_sort(small_array, 8);
    double ins_runtime_medium = insertion_sort(medium_array, 16);
    double ins_runtime_large = insertion_sort(large_array, 64);

    double bub_runtime_small = bubble_sort(small_array, 8);
    double bub_runtime_medium = bubble_sort(medium_array, 16);
    double bub_runtime_large = bubble_sort(large_array, 64);

    double qs_runtime_small = quick_sort(small_array, 8);
    double qs_runtime_medium = quick_sort(medium_array, 16);
    double qs_runtime_large = quick_sort(large_array, 64);

    double ms_runtime_small = merge_sort(small_array, 8);
    double ms_runtime_medium = merge_sort(medium_array, 16);
    double ms_runtime_large = merge_sort(large_array, 64);

    double bs2k_runtime_ran = bubble_sort_2k(array_2k_ran, array_2k);
    double bs2k_runtime_asc = bubble_sort_2k(array_2k_asc, array_2k);
    double bs2k_runtime_dsc = bubble_sort_2k(array_2k_dsc, array_2k);

    // free memory
    free(small_array);
    free(medium_array);
    free(large_array);

    free(array_2k_ran);
    free(array_2k_asc);
    free(array_2k_dsc);

    printf("\n\nRUNTIMES\n------\n");
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
    printf("Merge Sort large: %lf secs\n", ms_runtime_large);

    printf("Bubble Sort 2k Random: %lf secs\n", bs2k_runtime_ran);
    printf("Bubble Sort 2k Ascending: %lf secs\n", bs2k_runtime_asc);
    printf("Bubble Sort 2k Descending: %lf secs\n", bs2k_runtime_dsc);

    printf("search algos\n");

    k_v_list dict[400];
    fill_list(dict, 400);

    // check an element
    printf("\nChecking 123rd element from list:\nkey: %d\nvalue: %s\n\n", dict[123].key, dict[123].value);
    char input;

    // ask user if they want to search for something in the dict
    printf("Please choose from the following options:\n---------");
    do{
       printf("\n(k) search with key\n(v) search with value\n(q) quit\n: ");
	   input = (char) getchar();
	   while ((getchar()) != '\n'){}; // clear input buffer
	   if (input == 'k'){
		   printf("Enter Key:\n");
		   int key = 0;
		   scanf("%d", &key);
           while ((getchar()) != '\n'){}; // clear input buffer

		   if (search_key(dict, 400, key)){
			   printf("Hit!\n");
		   }else{
			   printf("Miss!\n");
		   }
	   } else if (input == 'v'){
		   printf("Enter Text:\n");
		   char text[10];
		   scanf("%10s", &text[0]);
		   while ((getchar()) != '\n'); // clear input buffer
		   if (search_value(dict, 400, text)){
			   printf("Hit!\n");
		   } else{
			   printf("Miss!\n");
		   }
	   } else if (input == 'q'){
		   printf("quits manual search\n");
	   } else{
		   printf("\nplease either use 'k', 'v' or 'q'\n");
	   }
	} while (input != 'q');


	// runtime_list(30000, 500);

	return 0;
}
