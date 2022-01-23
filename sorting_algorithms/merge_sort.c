#include "merge_sort.h"

void print_array(short *a) {
	printf("Print List\n");

	int l = sizeof(a);

	printf("[ ");
	for(int i = 0; i < l; i += 1) {
		printf("%d ", a[i]);
	}

	printf("]\n");
}

void local_copy_array(short *from, short *to, int start, int end) {
    for (int i = start; i <= end; i+= 1) {
        from[i] = to[i];
    }
}

void merge_and_sort(int i, int j, short *a, short *b) {

    if (j <= i) {
    	return;
    }
    int mid = (i + j) / 2;

    merge_and_sort(i, mid, a, b);
    merge_and_sort(mid + 1, j, a, b);

    int pointer_left = i;
    int pointer_right = mid + 1;
    int k;

    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {
            b[k] = a[pointer_right];
            pointer_right++;
        } else if (pointer_right == j + 1) {
            b[k] = a[pointer_left];
            pointer_left++;
        } else if (a[pointer_left] < a[pointer_right]) {
            b[k] = a[pointer_left];
            pointer_left++;
        } else {
            b[k] = a[pointer_right];
            pointer_right++;
        }
    }

    // print_array(j-i, a, "a");
    // print_array(j-i, b, "b");

    local_copy_array(a, b, i, j);
}

int merge_sort(short *array) {
	/*
	int input = 16, a[64], b[64];

	srand(time(NULL));

	create_array(input, a);

	print_array(input, a, "");

	merge_and_sort(0, input-1, a, b);

	print_array(input, b, ""); */

	short b[sizeof(array)];

	merge_and_sort(0, sizeof(array)-1, array, b);

	printf("\nMerge sort\n");

	print_array(array);

	return 0;
}
