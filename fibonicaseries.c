#include<stdio.h>
#include<conio.h>
int main()
{
    int a=0,b=1,c,i,n;
    printf("Enter the no of series: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=0;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}
