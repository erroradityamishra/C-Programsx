#include <stdio.h>

int main()
{
    int a[10]={1,3,5,7,9,12},i,tar=7;
    for(i=0;i<tar;i++)
    {
        if(a[i]==tar){
              printf("Found:\n");
        }
      else{
          printf("Not Found \n");
      }
    }
    
printf("\n Another \n");
    for(i=0;i<tar;i++)
    {
        if(a[i]==tar){
              printf("Found:\n");
              break;
        }
      else{
          printf("Not Found \n");
      }
    }
    printf("Data %d is Found at %d ",tar,i);
    return 0;
}


/*
OUTPUT:
Not Found 
Not Found 
Not Found 
Found:
Not Found 
Not Found 
Not Found 

 Another 
Not Found 
Not Found 
Not Found 
Found:
Data 7 is Found at 3 
*/
