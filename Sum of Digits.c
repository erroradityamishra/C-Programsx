#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n,i,s=0;
    for(i=0;i<5;i++)
    {
          scanf("%1d", &n);     //Read one digit at a time
     s=s+ n;
    
    }
    printf("%d",s);       //sum 
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

OUTPUT:
10565
17

