#include <stdio.h>
#include "../include/quick_sort.h"
#include "../include/basic_sorting.h"

void swap(int* x, int* y) {
    int a = *x;
    *x = *y;
    *y = a;
}

int partition(int arr[], int low, int high, int pivot, int len) {
    int m = low + 1;
    int n = high;

    while (m <= n) {
        while (arr[m] < pivot) m += 1;
        while (arr[n] > pivot) n -= 1;
        if (m < n) {
            swap(&arr[m], &arr[n]);
            m += 1;
            n -= 1;
            // printf("Partition:\t");
            // array_printing(arr, len);
        }
    }

    pivot = n;
    swap(&arr[low], &arr[n]); 
    return n;
}

int i = 0;
void quick_sort(int arr[], int l, int h, int n) {
    int pivot;

    if ((h - l) <= 0) return;
    else {
        pivot = arr[l]; 
        int p = partition(arr, l, h, pivot, n);
        array_printing(arr, n);
        quick_sort(arr, l, p - 1, n);
        quick_sort(arr, p + 1, h, n);
    }
}