#include "libmx.h"

void *mx_realloc(void *ptr, size_t size) {
    void *new;
    
    if (ptr == NULL) {
        return new = malloc(size);
    }
    else {
        new = malloc(size);
        if (new == NULL)
            return NULL;
        mx_memcpy(new, ptr, size);
        free(ptr);
    }
    return new;
}

