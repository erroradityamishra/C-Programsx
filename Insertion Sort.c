#include <stdio.h>

void insertionSort(int arr[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {12, 11, 13, 5, 6};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    printArray(numbers, size);

    insertionSort(numbers, size);

    printf("Sorted array in ascending order: ");
    printArray(numbers, size);

    return 0;
}


/*
OUTPUT:

Original array: 12 11 13 5 6 
Sorted array in ascending order: 5 6 11 12 13 
*/
