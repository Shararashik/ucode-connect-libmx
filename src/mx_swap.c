#include "../inc/libmx.h"

void mx_swap(void **s1, void **s2) {
    void *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}

