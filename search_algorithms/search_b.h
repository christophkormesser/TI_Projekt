//
// Created by Christoph Kormesser on 24.01.22.
//

#ifndef TI_PROJEKT_SEARCH_B_H
#define TI_PROJEKT_SEARCH_B_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../shared/random_number.h"

struct Element{
    short key;
    char value[5];
};

struct Element *create_element();

struct Element create_array_search();

void search_b(struct Element *);

#endif //TI_PROJEKT_SEARCH_B_H
