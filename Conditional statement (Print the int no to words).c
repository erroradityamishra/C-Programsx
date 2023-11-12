#include <stdio.h>

void printNumberInWords(int num) {
    switch (num) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        default:
            printf("Greater than 9");
            break;
    }
}

int main() {
    int num;
    scanf("%d", &num);

    if (num <= 9) {
        printNumberInWords(num);
    } else {
        printf("Greater than 9");
    }

    return 0;
}


OUTPUT:
1
One
