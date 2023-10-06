#include <stdio.h>
int main()
{
    int i,n,s,a[10];
    printf("Series: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no, to search: ");
    scanf("%d",&s);
    for(i=0;i<10;i++)
    {
       if(a[i]==s)
       {
           printf("%d [%d]",s,i);
           break;
       }
    }
    if(i==n)
    {
        printf("Done:");
    }
    return 0;
}

