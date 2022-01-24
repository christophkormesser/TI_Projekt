//
// Created by Christoph Kormesser on 06.01.22.
//

#ifndef TI_PROJEKT_CREATE_ARRAY_H
#define TI_PROJEKT_CREATE_ARRAY_H

#include <stdlib.h>     // rand()
#include <stdio.h>      // printf()

enum direction {
	RANDOM = 0,
	ASC = 1,
	DSC = 2
};


#endif //TI_PROJEKT_CREATE_ARRAY_H

short *create_array(unsigned int size, short min, short max, enum direction);


#ifndef RANDOM_NUMBER_H
#define RANDOM_NUMBER_H

#include <stdlib.h>     // rand()
#include <stdio.h>      // printf()

int random_number(int min, int max);

#endif
