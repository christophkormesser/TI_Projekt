/*
 * runtime_dic.c
 *
 *  Created on: 24 Jan 2022
 *      Author: jd
 */
#include "compare_list.h"
#include "runtime.h"
#include "create_array.h"
#include "key_value_list.h"

void runtime_list(int size_dict, int size_array){
    k_v_list dict[size_dict];

    short min = -32767;
    short max = 32767;
    short *array = (short *)malloc(size_array * sizeof(short));
    array = create_array(size_array, min, max, RANDOM);
    fill_list(dict, size_dict);

    clock_t start_time;

    start_time = clock();
    for (int i = 0; i < size_array; ++i)
        search_key(dict, size_array, array[i]);

    printf("%13s%.8f\n", "self -> ", (double) (clock() - start_time) / CLOCKS_PER_SEC);

    qsort(dict, size_dict, sizeof(k_v_list), compare_list);
    start_time = clock();
    for (int i = 0; i < size_array; ++i)
        (int *) bsearch(&array[i], dict, 400, sizeof(k_v_list), compare_list);

    printf("%13s%.8f\n", "stdlib -> ", (double) (clock() - start_time) / CLOCKS_PER_SEC);
}
