#include<stdio.h>
#include<conio.h>
int main()
{
 int a=10, b=20, c;

 printf("Before Swap{A=%d , B=%d}",a,b);
 c=a;
 a=b;
 b=c;
 printf("After Swap{A= %d , B= %d}",a,b);


getch();
}