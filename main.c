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
#include "search_algorithms/search_b.h"
#include "shared/compare.h"
#include "shared/dic.h"
#include "shared/runtime_dic.h"

int main(void) {
	printf("sorting algos\n");
    srand(time(NULL));

    // short min = -32767;
    // short max = 32767;
    int array_2k = 2048;

    check_runtime(array_2k);

    // struct Element arr = create_array_search();
    // search_b(&arr);
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
    double ms_runtime_large = merge_sort(large_array, 64);

    short *bub2k_ran_array = create_array(2000, min, max, RANDOM);
    short *bub2k_asc_array = create_array(2000, min, max, ASC);
    short *bub2k_dsc_array = create_array(2000, min, max, DSC);



    double bs2k_runtime_ran = bubble_sort_2k(bub2k_ran_array, 2000);
    double bs2k_runtime_asc = bubble_sort_2k(bub2k_ran_array, 2000);
    double bs2k_runtime_dsc = bubble_sort_2k(bub2k_ran_array, 2000);

    free(small_array);
    free(medium_array);
    free(large_array);
    free(bub2k_ran_array);
    free(bub2k_asc_array);
    free(bub2k_dsc_array); */

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
    printf("Merge Sort large: %lf secs\n", ms_runtime_large);

    printf("Merge Sort small: %lf secs\n", bs2k_runtime_ran);
    printf("Merge Sort medium: %lf secs\n", bs2k_runtime_asc);
    printf("Merge Sort large: %lf secs\n", bs2k_runtime_dsc); */

    printf("search algos\n");

    Dictionary dict[400];
    fill_dictionary_with_random_values(dict, 400);


    printf("%d %s\n", dict[163].key, dict[163].text);
    char input;
    do{
	   printf("Search for specific (k)ey or (t)ext or (e)xit?\n");
	   input = (char) getchar();
	   while ((getchar()) != '\n'); // clear input buffer
	   if (input == 'k'){
		   printf("Enter Key:\n");
		   int key = 0;
		   scanf("%d", &key);
		   while ((getchar()) != '\n'); // clear input buffer
		   if (search_key(dict, 400, key)){
			   printf("Hit!\n");
		   } else{
			   printf("Miss!\n");
		   }
	   } else if (input == 't'){
		   printf("Enter Text:\n");
		   char text[10];
		   scanf("%10s", &text[0]);
		   while ((getchar()) != '\n'); // clear input buffer
		   if (search_text(dict, 400, text)){
			   printf("Hit!\n");
		   } else{
			   printf("Miss!\n");
		   }
	   } else if (input == 'e'){
		   printf("exit\n");
	   } else{
		   printf("unknown command\n");
	   }
	} while (input != 'e');


	do{
	   printf("Search for specific (k)ey or (e)xit?\n");
	   input = (char) getchar();
	   while ((getchar()) != '\n'); // clear input buffer
	   if (input == 'k'){
		   printf("Enter Key:\n");
		   int key = 0;
		   scanf("%d", &key);
		   while ((getchar()) != '\n'); // clear input buffer
		   // sort dict
		   qsort(dict, 400, sizeof(Dictionary), compare); // Something is happening...
		   //search for key
		   int *result;
		   result = (int *) bsearch(&key, dict, 400, sizeof(Dictionary), compare);
		   if (result == NULL){
			   printf("Miss!\n");
		   } else{
			   printf("Hit!\n");
		   }
	   } else if (input == 'e'){
		   printf("exit\n");
	   } else{
		   printf("unknown command\n");
	   }
	} while (input != 'e');


	performance_test_dictionary(30000, 500);

	return 0;
}
