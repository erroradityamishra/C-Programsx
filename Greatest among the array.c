#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i,n,a[10],max;
    printf("Enter the no of Digits: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=n;i++)
    { 
printf("\n %d ",a[i]);
    }  
    max=a[0];
    for(i=0;i<=n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("\n");
    printf("\n");
    printf(" %d",max);
    return 0;
}

OUTPUT:
Enter the no of DIgits: 2

1
2
3

 1 
 2 
 3 
 3
