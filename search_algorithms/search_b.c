//
// Created by Christoph Kormesser on 24.01.22.
//

#include "search_b.h"
struct Element *create_element(){
    short key = random_number(-32767, 32767);

    struct Element *new_element = malloc(sizeof(struct Element));
    new_element->key = key;

    strcpy(new_element->value, "aaaa");
    return new_element;
}

struct Element create_array_search(){
    struct Element *new_array = malloc(sizeof(struct Element) * 400);
    if(new_array == NULL){
        fprintf(stderr, "create_array (search): Out of Memory!");
        exit(1);
    }

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
