#include "merge_sort.h"

void ms_print_array(short *a) {
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

int merge_sort(short *array, int l) {
	/*
	int input = 16, a[64], b[64];

	srand(time(NULL));

	create_array(input, a);

	print_array(input, a, "");

	merge_and_sort(0, input-1, a, b);

	print_array(input, b, ""); */

	printf("\nMerge sort - %d\n\n", l);

    clock_t start_t, end_t;
    double total_t;

    short *sorted = copy_array(array, l);
    short *b = (short *)malloc(sizeof(short) * l);

    // short *new = copy_array(array);

    start_t = clock();
	merge_and_sort(0, l-1, sorted, b);
    end_t = clock();

    total_t = (double)(end_t - start_t)/CLOCKS_PER_SEC;
    printf("\nRuntime: %lf seconds\n", total_t);
    for(int q = 0; q < l; q++){
        printf(" %hi ", sorted[q]);
    }

	return 0;
}
