#include <stdio.h>

// Function to heapify a subtree rooted at index 'root'
void heapify(int arr[], int size, int root) {
    int largest = root; // Initialize largest as root
    int left = 2 * root + 1; // Left child
    int right = 2 * root + 2; // Right child

    // If left child is larger than root
    if (left < size && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < size && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != root) {
        // Swap root and largest
        int temp = arr[root];
        arr[root] = arr[largest];
        arr[largest] = temp;

        // Recursively heapify the affected sub-tree
        heapify(arr, size, largest);
    }
}

// Function to perform Heap Sort
void heapSort(int arr[], int size) {
    // Build heap (rearrange array)
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(arr, size, i);

    // Extract elements from heap one by one
    for (int i = size - 1; i > 0; i--) {
        // Swap the current root with the last element
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main() {
    // Array to be sorted
    int numbers[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Array before sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    // Perform Heap Sort
    heapSort(numbers, size);

    printf("Array after sorting: ");
    for (int i = 0; i < size; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    return 0;
}


/*
OUTPUT:
Array before sorting: 12 11 13 5 6 7 
Array after sorting: 5 6 7 11 12 13 

  */
