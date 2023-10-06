#include <stdio.h>

int main() {
    char str[100];  // Declare a character array to store the string
    int length = 0; // Initialize a variable to store the length

    printf("Enter a string: ");
    scanf("%s", str); // Read the string from user input

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of the string: %d\n", length);

    return 0;
}
