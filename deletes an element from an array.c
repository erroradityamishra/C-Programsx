#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main() {
    int array[MAX_SIZE];
    int size, index;

    printf("Enter the size of the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]); // Reading elements into the array
    }

    printf("Enter the index of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &index);

    if (index < 0 || index >= size) {
        printf("Invalid index!\n");
        return 1;
    }

    // Shift elements to the left to overwrite the element at the specified index
    for (int i = index; i < size - 1; i++) {
        array[i] = array[i + 1];
    }

    size--; // Decreasing the size of the array after deletion

    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]); // Displaying the array elements after deletion
    }
    printf("\n");

    return 0;
}


/*
OUTPUT:
Enter the size of the array (max 100): 7
Enter 7 elements:
1
2
3
4
5
6
7
Enter the index of the element to delete (0 to 6): 0
Array after deletion:
2 3 4 5 6 7 

  */
