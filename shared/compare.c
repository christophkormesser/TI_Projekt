/*
 * compare.c
 *
 *  Created on: 24 Jan 2022
 *      Author: jd
 */

#include "compare.h"

int compare(const void *a, const void *b){
    // cast void pointer to dictionary pointer
    const Dictionary *d_a = (Dictionary *) a;
    const Dictionary *d_b = (Dictionary *) b;
    if (d_a->key != d_b->key){
        return d_a->key - d_b->key;
    }
    // a and b are identical
    return 0;
}
