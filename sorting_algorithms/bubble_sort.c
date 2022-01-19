//
// Author: Juneyd Ahmad
//

#include "bubble_sort.h"

void bubble_sort(short *array, int numbers) {
    int i;
    int j;
    int backup;

    short *new = copy_array(array);


    for (i = 0; i < numbers - 1; ++i) {
        for (j = 0; j < numbers - i - 1; ++j) {
            // compare two nearby elements
            if (array[j] > array[j + 1]) {
                // swap the elements if not in correct order
                backup = array[j];
                array[j] = array[j + 1];
                array[j + 1] = backup;
            }
        }
    }



    printf("\n\nBubble Sort:\nSorted\n");
    for (i = 0; i < numbers; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}