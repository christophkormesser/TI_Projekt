//
// Created by Christoph Kormesser on 06.01.22.
//

#include "create_array.h"
#include "random_number.h"

// #define MAX_INT 65536 // we subtract 32768 later, so we can create random negative numbers too

// short int:       -32.767 - 32.767
// unsigned int:    0 - 65.535
short *create_array(unsigned int size, short min, short max, enum direction dir){
    short *array = (short *)malloc(sizeof(short) * size);
    if(array == NULL){
        fprintf(stderr, "create array: Out of Memory!");
        exit(1);
    }
    int range;
    printf("\nUnsorted array: %d\n– ", size);

	switch (dir) {
		case RANDOM:
			printf("Direction: RANDOM\n[ ");
			for(unsigned int i = 0; i < size; i++) {
				array[i] = random_number(min, max);
                if(i < 15){
                    printf("%hi  ", array[i]);
                }
			}
			break;
		case ASC:
			printf("Direction: ASC\n[ ");
            // create step ranges
            range = (max / size) * 2; // problematic if size is greater than 32.767
            max = min + range;
            for(unsigned int i = 0; i < size; i++){
                array[i] = random_number(min, max);
                if(i < 15){
                    printf("%hi  ", array[i]);
                }
                min = max;      // new maximum
                max += range;   // new minimum
            }
			break;
		case DSC:
			printf("Direction: DSC\n[ ");
            // create step ranges
            range = (max / size) * 2; // problematic if size is greater than 32.767
            min = max - range;
			for(unsigned int i = 0; i < size; i++){
				array[i] = random_number(min, max);
                if(i < 15){
                    printf("%hi  ", array[i]);
                }
                max = min;      // new maximum
                min -= range;   // new minimum
			}
			break;
        default:
            printf("\nERROR: there is something wrong with the switch case in create_array.c !\n");
            break;
	}

    printf("]\n");

    return array;
}
