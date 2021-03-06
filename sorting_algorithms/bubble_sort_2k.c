//
// Author: Juneyd Ahmad
//

#include "bubble_sort_2k.h"

double bubble_sort_2k(short *array, int length) {
    printf("\n\nMICHAEL BUBLE SORT 2k - ");
    clock_t start_t, end_t;
    double total_t;
    short *cpyArr = copy_array(array, length);

    start_t = clock();
    int sort = 1;
    do{
        sort = 1;
        for (int j = 0; j < length-1; j++){
            if (cpyArr[j] > cpyArr[j + 1])  {
                int backup = cpyArr[j];
                cpyArr[j] = cpyArr[j + 1];
                cpyArr[j + 1] = backup;
                sort = 0;
            }
        }
    } while (!sort);

    end_t = clock();

    total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
    // printf("\n\nRuntime: %lf", total_t);

    printf("\nPrint sorted list: \n[");
    for (int i = 0; i < length; i++)    {
    	if (i < 15) {
            printf(" %d", cpyArr[i]);
    	}
    }

    printf(" ]\n");

    return total_t;
}

