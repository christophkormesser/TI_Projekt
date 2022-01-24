#include "random_number.h"

int random_number(int min, int max) {
    if((max-min) == 0){
        return min;
    }else{
        int num = rand() % (max-min) + min;
        return num;
    }
}
