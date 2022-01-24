#include "random_number.h"

short random_number(short min, short max) {
    if((max-min) == 0){
        return min;
    }else{
        short num = rand() % (max-min) + min;
        return num;
    }
}
