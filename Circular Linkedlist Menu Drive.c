#include <stdio.h>
#include <stdlib.h>

// Node structure for the circular linked list
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void insertAtBeginning(struct Node** headRef, int value);
void insertAtEnd(struct Node** headRef, int value);
void deleteFromBeginning(struct Node** headRef);
void deleteFromEnd(struct Node** headRef);
void displayList(struct Node* head);

int main() {
    struct Node* head = NULL;
    int choice, value;

    while (1) {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Delete from beginning\n");
        printf("4. Delete from end\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at the beginning: ");
                scanf("%d", &value);
                insertAtBeginning(&head, value);
                break;
            case 2:
                printf("Enter value to insert at the end: ");
                scanf("%d", &value);
                insertAtEnd(&head, value);
                break;
            case 3:
                deleteFromBeginning(&head);
                printf("Node deleted from the beginning.\n");
                break;
            case 4:
                deleteFromEnd(&head);
                printf("Node deleted from the end.\n");
                break;
            case 5:
                displayList(head);
                break;
            case 6:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }

    return 0;
}

// Function to insert a node at the beginning of the circular linked list
void insertAtBeginning(struct Node** headRef, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Insertion failed.\n");
        return;
    }
    newNode->data = value;

    if (*headRef == NULL) {
        newNode->next = newNode; // Points to itself for the first node
        *headRef = newNode;
    } else {
        struct Node* temp = *headRef;
        while (temp->next != *headRef) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *headRef;
        *headRef = newNode;
    }
}

// Function to insert a node at the end of the circular linked list
void insertAtEnd(struct Node** headRef, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed. Insertion failed.\n");
        return;
    }
    newNode->data = value;

    if (*headRef == NULL) {
        newNode->next = newNode; // Points to itself for the first node
        *headRef = newNode;
    } else {
        struct Node* temp = *headRef;
        while (temp->next != *headRef) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *headRef;
    }
}

// Function to delete a node from the beginning of the circular linked list
void deleteFromBeginning(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty. Deletion failed.\n");
        return;
    }
    if ((*headRef)->next == *headRef) {
        free(*headRef);
        *headRef = NULL;
    } else {
        struct Node* temp = *headRef;
        while (temp->next != *headRef) {
            temp = temp->next;
        }
        temp->next = (*headRef)->next;
        struct Node* toDelete = *headRef;
        *headRef = (*headRef)->next;
        free(toDelete);
    }
}

// Function to delete a node from the end of the circular linked list
void deleteFromEnd(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty. Deletion failed.\n");
        return;
    }
    if ((*headRef)->next == *headRef) {
        free(*headRef);
        *headRef = NULL;
    } else {
        struct Node* temp = *headRef;
        struct Node* prev = NULL;
        while (temp->next != *headRef) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = (*headRef);
        free(temp);
    }
}

// Function to display the circular linked list
void displayList(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Circular Linked List: ");
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(Starting point)\n");
}



/*
OUTPUT:

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 1
Enter value to insert at the beginning: 10

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 5
Circular Linked List: 10 -> (Starting point)

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 2
Enter value to insert at the end: 100

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 5
Circular Linked List: 10 -> 100 -> (Starting point)

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 1
Enter value to insert at the beginning: 50

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 5
Circular Linked List: 50 -> 10 -> 100 -> (Starting point)

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 3
Node deleted from the beginning.

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 5
Circular Linked List: 10 -> 100 -> (Starting point)

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 4
Node deleted from the end.

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 5
Circular Linked List: 10 -> (Starting point)

Circular Linked List Operations:
1. Insert at beginning
2. Insert at end
3. Delete from beginning
4. Delete from end
5. Display
6. Exit
Enter your choice: 6
Exiting...
*/
