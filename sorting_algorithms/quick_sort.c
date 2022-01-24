/*
 * main.c
 *
 *  Created on: 29 Dec 2021
 *      Author: jd
 */

#include "quick_sort.h"
#include "../shared/copy_array.h"

void qs_print_array(short *a) {
	printf("Print List\n");

	int l = sizeof(a);

	printf("[ ");
	for(int i = 0; i < l; i += 1) {
		printf("%d ", a[i]);
	}

	printf("]\n");
}

void quicksort(short *array, int first, int last) {

	int i, j, pivot, temp;

	if(first < last) {

		pivot = first;
		i = first;
		j = last;

		while(i<j) {
			while(array[i] <= array[pivot] && i < last)
				i++;

			while(array[j] > array[pivot])
				j--;

			if(i < j) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}

		temp = array[pivot];
		array[pivot] = array[j];
		array[j] = temp;

		quicksort(array, first, j-1);
		quicksort(array, j+1, last);
	}
}

int quick_sort(short *array, int l) {

	printf("\nQuick Sort - %d\n", l);

    short *sorted = (short *)malloc(sizeof(short) * l);
    sorted = copy_array(array, l);

	quicksort(sorted, 0, l-1);

    printf("\nSorted:::\n");
    for(int q = 0; q < l; q++){
        printf("%hi\t", sorted[q]);
    }
    printf("\n");

	return 0;
}
