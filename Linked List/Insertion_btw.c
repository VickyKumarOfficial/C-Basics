#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};
/*
Declaring in global to accessed by every function and used only by their variables
rather than typing whole sentence of struct node again & again. 
 */
struct Node *head = NULL, *tail = NULL;     // Initially poiting head and tail both at 'NULL'.
void insertAtBeginning(int n) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode -> data = n;    // Putting data into a new node
    if (head == NULL) {     // If linked list is empty or not.
        head = tail = newNode;  // Now linking 'head', 'tail' (initially linked 
                                // together only) and 'newNode' together.
        tail -> next = NULL;    // Giving tail's next pointer 'NULL' to dentote the last node.
    }
    else {  // If linked list is not empty.
        newNode -> next = head;     // Giving address of head to newNode's next pointer.
        head = newNode;     // Now assigning newNode as the head. 
    }
}
void insertAtLast(int n) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode -> data = n;
    newNode -> next = NULL;
    if (head == NULL) head = tail = newNode;
    else {
        tail -> next = newNode;   // link
        tail = newNode;   // update tail
    }
}

void printList() {
    if (head == NULL) printf("NO LIST CREATED!\n");
    else {
        struct Node* temp = head;
        while (temp != NULL) {
            printf("%d ", temp -> data);
            temp = temp -> next;
        } 
        printf("\n");
    }
}

int listSize() {
    if (head == NULL) return 0;
    int cnt = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

void insertAtPosition(int position, int n) {
    int size = listSize();
    if (position == 1 || head == NULL) insertAtBeginning(n);
    else if (position >= size) insertAtLast(n);
    else {
        int count = 1;
        struct Node *temp = head;
        struct Node *newNode = malloc(sizeof(struct Node));
        newNode -> data = n;
        while (count != position-1) {
            count++;
            temp = temp -> next;
        }
        struct Node *hold = temp -> next;
        temp -> next = newNode;
        newNode -> next = hold;
    }
}

int main() {
    insertAtPosition(1, 5);
    insertAtPosition(1, 3);
    insertAtPosition(5, 8);
    insertAtPosition(2, 4);
    insertAtPosition(3, 10);
    printList();
    return 0;
}
