#include "../inc/libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i;
    for (i = 0; src[i] && i != len; i++)
    {
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;    
}




