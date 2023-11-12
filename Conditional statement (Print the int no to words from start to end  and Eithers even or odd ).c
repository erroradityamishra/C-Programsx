#include <stdio.h>

void printNumberInWords(int num) {
    switch (num) {
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        default:
            break;
    }
}

int main() {
    int start, end;
    scanf("%d", &start);
    scanf("%d", &end);

    for (int i = start; i <= end; i++) {
        if (i <= 9) {
            printNumberInWords(i);
        } else {
            printf("%s", (i % 2 == 0) ? "even" : "odd");
        }
        printf("\n");
    }

    return 0;
}

OUTPUT:
eight
nine
even
odd
