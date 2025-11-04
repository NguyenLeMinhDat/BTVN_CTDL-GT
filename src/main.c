#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/basic_sorting.h"
#include "../include/merge_sort.h"
#include "../include/quick_sort.h"
#include "../include/test_vector.h"

int main() {
    int option;
    int* arr = NULL;

    printf("Lua chon thuat toan sap xep:\n");
    printf("1. Insertation sort\n");
    printf("2. Selection sort\n");
    printf("3. Bubble sort\n");
    printf("4. Quick sort\n");
    printf("5. Merge sort\n");
    printf("Nhap lua chon: ");
    scanf("%d", &option);

    for (int i = 0; i < v_num; i++) {

        arr = realloc(arr, v_size[i] * sizeof(int));
        memcpy(arr, v[i], v_size[i] * sizeof(int));

        printf("\nMang truoc khi sap xep: \n");
        for (int j = 0; j < v_size[i]; j++) {
            printf("%d ", arr[j]);
        }
        printf("\n");

        switch (option)
        {
        case 1:
            printf("Insertation Sort:\n");
            insertion_sort(arr, v_size[i]);
            break;
        
        case 2:
            printf("Selection Sort:\n");
            selection_sort(arr, v_size[i]);
            break;

        case 3:
            printf("Bubble Sort:\n");
            bubble_sort(arr, v_size[i]);
            break;

        case 4:
            printf("Quick Sort:\n");
            quick_sort(arr, 0, v_size[i] - 1, v_size[i]);
            break;
        case 5:
            printf("Merge Sort:\n");
            merge_sort(arr, 0, v_size[i] - 1, v_size[i]);
            break;
        default:
            printf("Nhap sai!\n");
            break;
        }
    }

    return 0;
}

/*
gcc -c ./src/main.c -o ./build/main.o
gcc -c ./src/basic_sorting.c -o ./build/basic_sorting.o
gcc -c ./src/advanced_sorting.c -o ./build/advanced_sorting.o
gcc ./build/* -o main
*/