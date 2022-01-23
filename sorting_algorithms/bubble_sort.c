//
// Author: Juneyd Ahmad
//

#include "bubble_sort.h"

void bubble_sort(short *array) {
    printf("[1].[1].[c] - MICHAEL BUBLE SORT:\n");
    clock_t start_t, end_t;
    double total_t;
    short *cpyArr = copy_array(array);

    /*
    for (int i = 0; i < 64; ++i) {
        printf("%d ", cpyArr[i]);
    }
    printf("\n");
*/
    start_t = clock();
    int sort = 1;
    do{
        sort = 1;
        for (int j = 0; j < 64-1; j++){
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
    printf("\n\nRuntime: %lf", total_t);

    printf("\nPrint sorted list: \n[");
    for (int i = 0; i < 64; i++)    {
        printf(" %d", cpyArr[i]);
    }

    printf(" ]\n");
}
