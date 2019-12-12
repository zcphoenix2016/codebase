#include "functions.h"
#include <stdarg.h>

void swap(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int sum(unsigned int count, ...) {
    va_list args;
    va_start(args, count); //retrieve argument list following 'count'

    int sum = 0;
    for (int index = 0; index < count; index++) {
        sum += va_arg(args, int); //retrieve argument one by one
    }
    va_end(args);

    return sum;
}
