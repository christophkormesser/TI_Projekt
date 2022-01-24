/*
 * dic.c
 *
 *  Created on: 24 Jan 2022
 *      Author: jd
 */

#include <stdlib.h>
#include <string.h>
#include "dic.h"

void fill_dictionary_with_random_values(Dictionary *dictionary, int size){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < size; ++i){
        dictionary[i].key = (rand() % (32768 * 2)) - 32768;
        for (int i = 0; i < size; ++i){
            for (int j = 0; j < 10; ++j){
                dictionary[i].text[j] = alphabet[rand() % 26];
            }
        }
    }
}

int search_key(Dictionary *dictionary, int size, int key){
    for (int i = 0; i < size; ++i)
        if (dictionary[i].key == key) return 1;
    return 0;
}

int search_text(Dictionary *dictionary, int size, const char *string){
    for (int i = 0; i < size; ++i)
        if (strcmp(dictionary[i].text, string) == 0) return 1;
    return 0;
}
