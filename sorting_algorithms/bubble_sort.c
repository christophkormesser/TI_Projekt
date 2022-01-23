//
// Author: Juneyd Ahmad
//

#include "bubble_sort.h"

int bubble_sort(short *array) {
    printf("\n\nMichael Buble Sort:\n");
    short *cpyArr = copy_array(array);


    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            // compare two nearby elements
            if (cpyArr[j] > cpyArr[j + 1]) {
                // swap the elements if not in correct order
                int backup = cpyArr[j];
                cpyArr[j] = cpyArr[j + 1];
                cpyArr[j + 1] = backup;
            }
        }
    }

    printf("\nSorted: \n[");
    for (int k = 0; k < 8; k++)    {
        printf(" %d", cpyArr[k]);
    }

    printf(" ]\n");

    return 0;
}