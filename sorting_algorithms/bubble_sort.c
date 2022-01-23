//
// Author: Juneyd Ahmad
//

#include "bubble_sort.h"

void bubble_sort(short *array, int length) {
    printf("\n\nMichael Buble Sort:\n");
    short *cpyArr = copy_array(array);

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

    printf("\nSorted: \n[");
    for (int i = 0; i < 8; i++)    {
        printf(" %d", cpyArr[i]);
    }

    printf(" ]\n");
}