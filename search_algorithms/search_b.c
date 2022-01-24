//
// Created by Christoph Kormesser on 24.01.22.
//

#include "search_b.h"
struct Element *create_element(){
    short key = random_number(-32767, 32767);

    struct Element *new_element = malloc(sizeof(struct Element));
    new_element->key = key;

    /*
    for(int e = 0; e < 4; e++){
        new_element->value[e] = random_number(65, 122);
    }
*/
    strcpy(new_element->value, "aaaa");
    return new_element;
}

/*
void fill_dictionary_with_random_values(struct Element *dictionary, int size){
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    for (int i = 0; i < size; ++i){
        dictionary[i].key = (rand() % (32768 * 2)) - 32768;
        for (int i = 0; i < size; ++i){
            for (int j = 0; j < 10; ++j){
                dictionary[i].value[j] = alphabet[rand() % 26];
            }
        }
    }
} */


struct Element create_array_search(){
    struct Element *new_array = malloc(sizeof(struct Element) * 400);
    if(new_array == NULL){
        fprintf(stderr, "create_array (search): Out of Memory!");
        exit(1);
    }
    // fill_dictionary_with_random_values(new_array, 400);
    // create array with 400 elements
 /*   for(int i = 0; i < 400; i++){
        new_array[i] = *create_element();
    }*/


    return *new_array;
}

void search_b(struct Element *array){
    for(int i = 0; i < 400; i++){
        printf("\n%d:: %hi: ", i, array->key);
        for(int e = 0; e < 4; e++){
            printf("%c", array->value[e]);
        }
        array +=1;
    }
    free(array);
}
