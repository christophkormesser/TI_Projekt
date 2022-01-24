//
// Created by Christoph Kormesser on 05.01.22.
//

#ifndef TI_PROJEKT_INSERTION_SORT_H
#define TI_PROJEKT_INSERTION_SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <time.h>

#include "../shared/copy_array.h"
#include "../shared/list_funcs.h"

double insertion_sort(short *array, int length);

void insertionsort_linkedlist(Node **head);

#endif //TI_PROJEKT_INSERTION_SORT_H
