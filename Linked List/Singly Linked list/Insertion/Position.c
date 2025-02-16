/* 
Want only the function

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

*/

// Working code:

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
    // list - 7
    insertAtPosition(1, 5);    // First number is the position and second is the value for inssertion.
    // list - 5 7
    insertAtBeginning(4);
    // list - 4 5 7
    insertAtPosition(2, 6);
    // list - 4 6 5 7
    printList();
    // Final list tp be printed -> 4 6 5 7
    return 0;
}

