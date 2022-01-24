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
	printf("sorting algos\n");
    srand(time(NULL));

    // short min = -32767;
    // short max = 32767;
    int array_2k = 2048;

    check_runtime(array_2k);

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

    k_v_list dict[400];
    fill_list(dict, 400);


    printf("%d %s\n", dict[163].key, dict[163].value);
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
		   if (search_value(dict, 400, text)){
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
		   qsort(dict, 400, sizeof(k_v_list), compare_list); // Something is happening...
		   //search for key
		   int *result;
		   result = (int *) bsearch(&key, dict, 400, sizeof(k_v_list), compare_list);
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


	runtime_list(30000, 500);

	return 0;
}
