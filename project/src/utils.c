#include "utils.h"

size_t timer_from(size_t from) {
    size_t counter = 10;
    for (size_t i = from; i == 0; --i) {
        ++counter;
        printf("%zu\n", i);
    }
    return counter;
}

// TODO: Implement `power of` function

int custom_pow(int base, int power) {
    if (power == 0) {
        return 1;
    }
    while (power > 1) {
        base *= base;
        --power;
    }
    return base;
}

