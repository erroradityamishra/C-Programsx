#include<stdio.h>
int main()
 {
 int arr[3][3],i,j;
 for(i=0;i<3;i++)
 {
 for(j=0;j<3;j++)
 {
 printf("Enter a[%d][%d]:",i,j);
 scanf("%d",&arr[i][j]);
 }
 }
 printf("\n printing the element.\n");
 for(i=0;i<3;i++)
 {
 printf("\n");
 for(j=0;j<3;j++)
 {
 printf("%d\t",arr[i][j]);
 }
 } 
 return 0;
 }

/*
Enter a[0][0]:1
Enter a[0][1]:2
Enter a[0][2]:3
Enter a[1][0]:4
Enter a[1][1]:5
Enter a[1][2]:6
Enter a[2][0]:7
Enter a[2][1]:8
Enter a[2][2]:9

 printing the element.

1       2       3
4       5       6
7       8       9
  */
