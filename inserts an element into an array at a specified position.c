#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main() {
    int array[MAX_SIZE], size, element, position;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    if (size >= MAX_SIZE || size <= 0) {
        printf("Invalid size of the array!\n");
        return 1;
    }

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);

    if (position < 0 || position > size) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to make space for the new element
    for (int i = size; i > position; i--) {
        array[i] = array[i - 1];
    }

    array[position] = element;
    size++; // Increment the size of the array

    printf("Array after insertion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


/*
OUTPUT:
Enter size of the array: 5
Enter elements of the array:
1
2
3
4
5
Enter the element to insert: 7
Enter the position to insert the element: 0
Array after insertion:
7 1 2 3 4 5 
*/
