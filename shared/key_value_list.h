#ifndef KEY_VALUE_LIST_H
#define KEY_VALUE_LIST_H

#include <stdlib.h>
#include <string.h>

typedef struct k_v_list {
    int key;
    char value[10];
} k_v_list;

void fill_list(k_v_list *list, int size);

int search_key(k_v_list *list, int size, int key);

int search_value(k_v_list *list, int size, const char *string);

#endif //DICTIONARY_H
