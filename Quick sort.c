#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    // Array declaration and initialization
    int numbers[] = {12, 9, 4, 99, 120, 1, 3, 10};

    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    quickSort(numbers, 0, arraySize - 1);

    printf("Array sorted in ascending order: ");
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}


/*
OUTPUT:
Original array: 12 9 4 99 120 1 3 10 
Array sorted in ascending order: 1 3 4 9 10 12 99 120 

  */
