#include "random_number.h"

int random_number(int min, int max) {
	int num = rand() % (max-min) + min;
	return num;
}
