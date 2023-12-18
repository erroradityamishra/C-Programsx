#include <stdio.h>

#define SIZE 10

// Function to perform bubble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numbers[SIZE] = {64, 34, 25, 12, 22, 11, 90, 2, 45, 10};

    printf("Original array: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // Perform bubble sort
    bubbleSort(numbers, SIZE);

    printf("Sorted array in ascending order: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

/*
OUTPUT:
Original array: 64 34 25 12 22 11 90 2 45 10 
Sorted array in ascending order: 2 10 11 12 22 25 34 45 64 90 

  */
