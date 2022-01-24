/*
 * compare.c
 *
 *  Created on: 24 Jan 2022
 *      Author: jd
 */

#include "compare_list.h"

int compare_list(const void *a, const void *b){
    // cast void pointer to dictionary pointer
    const k_v_list *d_a = (k_v_list *) a;
    const k_v_list *d_b = (k_v_list *) b;
    if (d_a->key != d_b->key){
        return d_a->key - d_b->key;
    }
    // a and b are identical
    return 0;
}
