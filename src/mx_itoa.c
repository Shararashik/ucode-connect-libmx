#include "../inc/libmx.h"

char* mx_itoa(int number) {
    int num_digits = mx_int_len(number, 10);

    if (number < 0) {
        mx_printchar('-');
    }

    char* str = mx_strnew(num_digits);
    if (str == NULL) {
        return NULL;
    }

    for (int i = num_digits - 1; i >= 0; i--) {
        str[i] = '0' + (number % 10);
        number /= 10;
    }

    return str;
}


