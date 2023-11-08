#include <stdio.h>
///#include <conio.h>
#define size 5

//stack structure
struct stack{
   int s[size];
   int top;
}st;

int stackfull(){
    if(st.top > size - 1)
        return 1;
    else
        return 0;
}

int stackempty(){
    if(st.top == -1)
        return 1;
    else
        return 0;
}

void push(int item){
    st.top++;
    st.s[st.top] = item;
}

int pop(){
    int item;
    item = st.s[st.top];
    st.top--;
    return(item);
}

void display(){
    int i;
    if(stackempty())
        printf("\n Stack is Empty: ");
    else{
        printf("\n Elements of Stack: ");
        for(i = st.top; i >= 0; i--)
            printf("%d ", st.s[i]);
    }
}

//Main Function
int main(){
    int item, ch;
    st.top = -1;
   
    printf("\n Stack Implementation: ");
    do{
        printf("\n Main  Menu");
        printf("\n 1: Push");
        printf("\n 2: Pop");
        printf("\n 3: Display");
        printf("\n 4: Exit");
        printf("\n Select Operation:");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("\n Enter the item to be Pushed:");
                scanf("%d", &item);
                if(stackfull())
                    printf("\n Stack is Full (Overflow)");
                else
                    push(item);
                break;
                
            case 2:
                if(stackempty())
                    printf("\n Stack is Empty (Underflow)");
                else{
                    item = pop();
                    printf("\n Popped item is: %d", item);
                }
                break;
                
            case 3: 
                display();
                break;

            case 4:
                printf("\nEnd the program: ");
                break;
        }
    } while(ch != 4);

  
    return 0;
}




OUTPUT:

Stack Implementation: 
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:1
 Enter the item to be Pushed:10
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:1
 Enter the item to be Pushed:20
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:1
 Enter the item to be Pushed:30
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:3
 Elements of Stack: 30 20 10 
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:2
 Popped item is: 30
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:3
 Elements of Stack: 20 10 
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:2
 Popped item is: 20
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:3
 Elements of Stack: 10 
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:2
 Popped item is: 10
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:3
 Stack is Empty: 
 Main  Menu
 1: Push
 2: Pop
 3: Display
 4: Exit
 Select Operation:4
 End the program: 
