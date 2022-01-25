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
    int array_2k = 2000;
    // int array_2048 = 2048;

    // 1.4
    check_runtime(array_2k);

    short *array_small = create_array(8, -32767, 32767, RANDOM);
    short *array_medium = create_array(16, -32767, 32767, RANDOM);
    short *array_large = create_array(64, -32767, 32767, RANDOM);

    short *array_1 = create_array(8, -32767, 32767, RANDOM);
    short *array_2 = create_array(32, -32767, 32767, RANDOM);
    short *array_3= create_array(128, -32767, 32767, RANDOM);
    short *array_4 = create_array(8, -32767, 32767, RANDOM);
    short *array_5 = create_array(32, -32767, 32767, RANDOM);
    short *array_6 = create_array(128, -32767, 32767, RANDOM);
    short *array_7 = create_array(8, -32767, 32767, RANDOM);

    short *array_2k_ran = create_array(array_2k, -32767, 32767, RANDOM);

    double ins_runtime_1 = insertion_sort(array_1, 8);
    double ins_runtime_2 = insertion_sort(array_2, 16);
    double ins_runtime_3 = insertion_sort(array_3, 64);
    double ins_runtime_4 = insertion_sort(array_4, 8);
    double ins_runtime_5 = insertion_sort(array_5, 16);
    double ins_runtime_6 = insertion_sort(array_6, 64);
    double ins_runtime_7 = insertion_sort(array_7, 64);

    double bub_runtime_1 = bubble_sort(array_1, 8);
    double bub_runtime_2 = bubble_sort(array_2, 16);
    double bub_runtime_3 = bubble_sort(array_3, 64);
    double bub_runtime_4 = bubble_sort(array_4, 8);
    double bub_runtime_5 = bubble_sort(array_5, 16);
    double bub_runtime_6 = bubble_sort(array_6, 64);
    double bub_runtime_7 = bubble_sort(array_7, 8);

    double qs_runtime_1 = quick_sort(array_1, 8);
    double qs_runtime_2 = quick_sort(array_2, 16);
    double qs_runtime_3 = quick_sort(array_3, 64);
    double qs_runtime_4 = quick_sort(array_4, 8);
    double qs_runtime_5 = quick_sort(array_5, 16);
    double qs_runtime_6 = quick_sort(array_6, 64);
    double qs_runtime_7 = quick_sort(array_7, 8);

    double ms_runtime_1 = merge_sort(array_1, 8);
    double ms_runtime_2 = merge_sort(array_2, 16);
    double ms_runtime_3 = merge_sort(array_3, 64);
    double ms_runtime_4 = merge_sort(array_4, 8);
    double ms_runtime_5 = merge_sort(array_5, 16);
    double ms_runtime_6 = merge_sort(array_6, 64);
    double ms_runtime_7 = merge_sort(array_7, 8);

    // 1.3
    double sum = 0, min = 100, max = 0;

    printf("\n\n\n\n\n");
    for (int i = 0; i < 20; i++) {
        double bs2k_runtime = bubble_sort_2k(array_2k_ran, array_2k);

        sum += bs2k_runtime;

        if (bs2k_runtime < min) {
        	min = bs2k_runtime;
        }
        if (bs2k_runtime > max) {
        	max = bs2k_runtime;
        }

        printf("\n%d Bubble Sort 12k : %lf secs\n", i, bs2k_runtime);
    }

    printf("Average: %lf \n", sum/20);
    printf("Minimum: %lf \n", min);
    printf("Maximum: %lf \n", max);

    // free memory
    free(array_1);
    free(array_2);
    free(array_3);
    free(array_4);
    free(array_5);
    free(array_6);
    free(array_7);

    free(array_small);
    free(array_medium);
    free(array_large);

    free(array_2k_ran);

    printf("\n\nRUNTIMES\n------\n");
    printf("Insertion Sort 1: %lf secs\n", ins_runtime_1);
    printf("Insertion Sort 2: %lf secs\n", ins_runtime_2);
    printf("Insertion Sort 3: %lf secs\n", ins_runtime_3);
    printf("Insertion Sort 4: %lf secs\n", ins_runtime_4);
    printf("Insertion Sort 5: %lf secs\n", ins_runtime_5);
    printf("Insertion Sort 6: %lf secs\n", ins_runtime_6);
    printf("Insertion Sort 7: %lf secs\n", ins_runtime_7);


    printf("Bubble Sort 1: %lf secs\n", bub_runtime_1);
    printf("Bubble Sort 2: %lf secs\n", bub_runtime_2);
    printf("Bubble Sort 3: %lf secs\n", bub_runtime_3);
    printf("Bubble Sort 4: %lf secs\n", bub_runtime_4);
    printf("Bubble Sort 5: %lf secs\n", bub_runtime_5);
    printf("Bubble Sort 6: %lf secs\n", bub_runtime_6);
    printf("Bubble Sort 7: %lf secs\n", bub_runtime_7);

    printf("Quick Sort 1: %lf secs\n", qs_runtime_1);
    printf("Quick Sort 2: %lf secs\n", qs_runtime_2);
    printf("Quick Sort 3: %lf secs\n", qs_runtime_3);
    printf("Quick Sort 4: %lf secs\n", qs_runtime_4);
    printf("Quick Sort 5: %lf secs\n", qs_runtime_5);
    printf("Quick Sort 6: %lf secs\n", qs_runtime_6);
    printf("Quick Sort 7: %lf secs\n", qs_runtime_7);

    printf("Merge Sort 1: %lf secs\n", ms_runtime_1);
    printf("Merge Sort 2: %lf secs\n", ms_runtime_2);
    printf("Merge Sort 3: %lf secs\n", ms_runtime_3);
    printf("Merge Sort 4: %lf secs\n", ms_runtime_4);
    printf("Merge Sort 5: %lf secs\n", ms_runtime_5);
    printf("Merge Sort 6: %lf secs\n", ms_runtime_6);
    printf("Merge Sort 7: %lf secs\n", ms_runtime_7);

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
