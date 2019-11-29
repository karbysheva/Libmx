#include "libmx.h"

int mx_quicksort(char **arr, int left, int right) {
    int min = left;
    int max = right;
    int count = 0;
    char *pivot = arr[(min + max) / 2];
    
    if (left < right) {
        while (min <= max) {
            while(mx_strlen(arr[min]) < mx_strlen(pivot))
                min++;
            while(mx_strlen(arr[max]) > mx_strlen(pivot))
                max--;

            if (min <= max) {
                if(mx_strlen(arr[max]) != mx_strlen(arr[min])) {
                    char *wrap = arr[min];
                    arr[min] = arr[max];
                    arr[max] = wrap;
                    count++;
                }
                max--;
                min++;
            }
        }
        count += mx_quicksort(arr, left, max);
        count += mx_quicksort(arr, min, right);
    }
    return count;
}

