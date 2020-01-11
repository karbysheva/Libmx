#include "libmx.h"

static void mx_swap(char **str1, char **str2) {
    char *wrap;

    wrap = *str1;
    *str1 = *str2;
    *str2 = wrap;
}

int mx_quicksort(char **arr, int left, int right) {
    int min = left;
    int max = right;
    int count = 0;
    char *pivot;

    if (!arr) return -1;
    pivot = arr[(min + max) / 2];
    if (left < right) {
        while (mx_strlen(arr[min]) < mx_strlen(pivot)) min++;
        while (mx_strlen(arr[max]) > mx_strlen(pivot)) max--;
            if (mx_strlen(arr[max]) != mx_strlen(arr[min])) {
                mx_swap(&arr[min], &arr[max]);
                count++;
            }
            max--;
            min++;
        count += mx_quicksort(arr, left, max);
        count += mx_quicksort(arr, min, right);
    }
    return count;
}

