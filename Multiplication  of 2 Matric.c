#include <stdio.h>

int main() {
    int a[3][3], b[3][3], c[3][3];

    printf("Enter the Elements of Matrix A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter the Elements of Matrix B:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Initialize matrix C with zeros
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            c[i][j] = 0;
        }
    }

    printf("Multiplication Result:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Display the result matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}


/*
OUTPUT:
Enter the Elements of Matrix A:
1
1
1
1
1
1
1
1
1
Enter the Elements of Matrix B:
2
2
2
2
2
2
2
2
2
Multiplication Result:
6 6 6 
6 6 6 
6 6 6 

  */
