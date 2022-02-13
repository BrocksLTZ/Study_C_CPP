#include "utils.h"

size_t timer_from(size_t from) {
    size_t counter;
    for (size_t i = from; i >= 0; --i) {
        ++counter;
        printf("%ld\n", i);
    }
    return counter;
}

// TODO: Implement `power of` function
/*
int custom_pow(int base, int power) {
    return 0;
}
*/
