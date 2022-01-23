//
// Created by Christoph Kormesser on 06.01.22.
//

#ifndef TI_PROJEKT_CREATE_ARRAY_H
#define TI_PROJEKT_CREATE_ARRAY_H

#include <stdlib.h>     // rand()
#include <stdio.h>      // printf()

enum Direction {
	RANDOM = 0,
	ASC = 1,
	DSC = 2
} direction;

short *create_array(unsigned int size, int min, int max, enum Direction direction);

#endif //TI_PROJEKT_CREATE_ARRAY_H



#ifndef RANDOM_NUMBER_H
#define RANDOM_NUMBER_H

#include <stdlib.h>     // rand()
#include <stdio.h>      // printf()

int random_number(int min, int max);

#endif
