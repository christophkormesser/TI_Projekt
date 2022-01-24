/*
 * dic.c
 *
 *  Created on: 24 Jan 2022
 *      Author: jd
 */

#include "key_value_list.h"

void fill_list(k_v_list *list, int size){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < size; ++i){
        list[i].key = (rand() % (32768 * 2)) - 32768;
        for (int i = 0; i < size; ++i){
            for (int j = 0; j < 10; ++j){
                list[i].value[j] = alphabet[rand() % 26];
            }
        }
    }
}

int search_key(k_v_list *list, int size, int key){
    for (int i = 0; i < size; ++i)
        if (list[i].key == key) return 1;
    return 0;
}

int search_value(k_v_list *list, int size, const char *string){
    for (int i = 0; i < size; ++i)
        if (strcmp(list[i].value, string) == 0) return 1;
    return 0;
}
