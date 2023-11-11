#include <stdio.h>
#include <stdlib.h>

void update(int *a,int *b) {
    int a_val = *a;     //Sum 

    int b_val = *b;       //Absolute difference

    *a = a_val + b_val;
    *b = abs(a_val - b_val);
}

int main() {
    int a = 0, b = 0;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
