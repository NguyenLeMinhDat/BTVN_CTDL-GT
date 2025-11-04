#include <stdio.h>
#include "../include/merge_sort.h"
#include "../include/basic_sorting.h"

void merge(int arr[], int l, int m, int r, int n) {
    int i = l, j = m + 1;

    while (i < j && j <= r) {
        if (arr[i] <= arr[j]) i++;
        else {
            int a = arr[j];

            for (int k = j - 1; k >= i; k--) 
                arr[k + 1] = arr[k];
            
            arr[i] = a;
            i++; 
            j++;
        }
    }
}

void merge_sort(int arr[], int l, int r, int n) {
    if (l < r) {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m, n);
        merge_sort(arr, m + 1, r, n);
        array_printing(arr, n);
        merge(arr, l, m, r, n);
    }
}