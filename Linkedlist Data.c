#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>
#define size 5
struct queue
{
    int que[size];                    //Front & Rear
    int f,r;
    
}Q;
int queuefull()
{
    if(Q.r>size-1)
    return 1;
    else
    return 0;
}
int queueEmpty()
{
    if(Q.f==-1 || (Q.f>Q.r))
    return 1;
    else
    return 0;
}
int insert_item(int item)
{
    if(Q.f==-1)
    Q.f++;
    Q.que[++Q.r]=item;
}

int delete_item()
{
    int item;
    item= Q.que[Q.f];
    Q.f++;
    printf("\n The Delete Item is %d ",item);
    return Q.f;
}
void display()
{
    int i;
    for(i=Q.f; i<=Q.r; i++)
    
        printf("   %d ",Q.que[i]);
    }
    void main(void)
    {
        int ch,item;
        //clrscr();
        Q.f= -1;
        Q.r= -1;
        printf("\n Queue Implementation: ");
        do{
            printf("\n 1: Insert ");
            printf("\n 2: Delete");
            printf("\n 3: DIsplay ");
            printf("\n 4: Exit");
            printf("\n ");
            
            printf("Select Operation:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                if(queuefull())
                {
                    printf("\n Cannot Insert Elemenmt ");
                }
                else
                {
                    printf("ENter the no, to be inserted: ");
                    scanf("%d",&item);
                    insert_item(item);
                }
                break;
                
                case 2:
                if(queueEmpty())
                {
                    printf("\n Queue is empty ");
                }
                else
                {
                   delete_item();
                }
                break;
                case 3:
                if(queueEmpty()){
                    printf("\n Queue is Empty:");
                }
                else{
                    display();
                }
                break;
                case 4:
                printf("\n END of the Progream...");
                
            }
            
        }
        while(ch!=4);
    }











OUTPUT:
/tmp/R9JL87w9Cl.o
Queue Implementation: 
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:1
 ENter the no, to be inserted: 10
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:1
 ENter the no, to be inserted: 20
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:1
 ENter the no, to be inserted: 30
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:3
 10    20    30 
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:2
 The Delete Item is 10 
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:3
 20    30 
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:2
 The Delete Item is 20 
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:3
 30 
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:2
 The Delete Item is 30 
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:3
 Queue is Empty:
 1: Insert 
 2: Delete
 3: DIsplay 
 4: Exit
 Select Operation:4
 END of the Progream...

