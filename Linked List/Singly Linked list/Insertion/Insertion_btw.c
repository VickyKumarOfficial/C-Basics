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
        head = newNode;     // Now assigning newNode as the head denoting first node. 
    }
}
void insertAtLast(int n) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode -> data = n;
    newNode -> next = NULL; // Assigning the newNode as the last node.
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
    struct Node *temp = head;   // Pointing a variable to head so that we can move it from
                            // starting node to next nodes and count the number of nodes.
    while (temp != NULL) {
        cnt++;
        temp = temp -> next;    // Moving 'cnt' varaible to next node again and again by loop.
    }
    return cnt;  // Returning the cnt (count) variable to use it in the
                 // insertion at given position.
}

void insertAtPosition(int position, int n) {
    int size = listSize();      // Calling function to get the number of nodes.
    if (position == 1 || head == NULL) insertAtBeginning(n);    // Node is empty so making
                                                                // a new node will the first one.
    else if (position >= size) insertAtLast(n); // If position given more than the size of number
    // of nodes that means it will automatically be the last node.
    else {
        int count = 1;
        struct Node *temp = head;   // temp is use to point out the position where ever
                                    // position value if given tto create a node.
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
    insertAtBeginning(7);
    insertAtPosition(3, 5);    // First number is the position and second is the value for inssertion.
    insertAtBeginning(4);
    insertAtBeginning(5);
    insertAtPosition(2, 6);
    printList();
    return 0;
}
