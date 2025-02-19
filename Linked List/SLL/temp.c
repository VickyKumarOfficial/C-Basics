#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL, *tail = NULL;

// NULL <- (nh)0(nn) -> 1(h) -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8(t) -> NULL
void InsertBegining(int n) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data=n;
    newNode->prev=NULL;
    if (head == NULL) { //  NULL <- 1 -> NULL
        head = tail = newNode;
        tail->next = NULL;
    } else {
        newNode->next = head;
        head -> prev = newNode;
        head = newNode;
    }
}

// NULL <- (nh)0(nn) -> 1(h) -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> (nn)(t) -> NULL
void insertLast(int n) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = n;
    newNode->next = NULL;
    if (head == NULL) InsertBegining(n);
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int size() {
    struct node *temp;
    if (head == NULL) return 0;
    int c = 1;
    temp = head;
    while (temp != NULL) {
        c++;
        temp = temp->next;
    }
    return c;
}

void intsertPosition(int position, int n) {
    int s = size();
    if (head == NULL || position == 1) InsertBegining(n);
    else if (position >= s) insertLast(n);
    else {
        struct node *newNode = malloc(sizeof(struct node));
        newNode->data = n;
        int c = 1;
        struct node *temp = head;
        head->prev = NULL;
        while (c != position - 1) {
            c++;
            temp = temp->next;
        }
        // NULL <- 1(h) -> 2 -> 3(temp) -> (nn) -> 4(hold) -> 5 -> 6 -> 7 -> 8 -> NULL
        struct node *hold = temp->next;
        temp->next = newNode;
        newNode->next = hold;
        hold->prev = newNode;
        newNode->prev = temp;
    }
}

void display() {
    if (head == NULL) printf("List is empty!"); 
    else {
        printf("Data in Forwards : ");
        struct node *temp = head;
        while (temp != NULL) {
            printf("%3d",temp->data);
            temp = temp->next;
        }
    }
}
void display_b() {
    if (head == NULL) printf("List is empty!"); 
    else {
        struct node *temp = tail;
        printf("Data in Backwards : ");
        while (temp != NULL) {
            printf("%3d",temp->data);
            temp = temp->prev;
        }
    }
}

int max() {
    if (head == NULL) return -1;
    int ans = 0;
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data > ans) {
            ans = temp->data;
        }
        temp = temp->next;
    }
    return ans;
}

void deleteAtBeginning() {
    if (head == NULL) printf("No List!");
    else {
        struct node *hold = head;
        head = head->next;
        free(hold);
    }
}

void deleteAtLast() {
    if (head == NULL) {
        printf("No List!");
    } 
    else if (head->next == NULL) {
        free(head);
        head = tail = NULL;
    } 
    else {
        struct node *temp = head;
        while (temp -> next != tail) {
            temp = temp->next;
        }
        
        struct node *hold = tail;
        free(hold);
        temp->next = NULL;
        tail = temp;
    }
}

void deleteAtPosition(int position) {
    int s = size();
    if (head == NULL || position == 1) deleteAtBeginning();
    else if (position >= s) deleteAtLast();
    else {
        int c = 1;
        struct node *temp = head;
        while (c != position - 1) {
            c++;
            temp = temp->next;
        }
        struct node *hold = temp->next;
        temp->next = temp->next->next;
        free(hold);
    }
}
int main() {
    InsertBegining(6);
    InsertBegining(7);
    InsertBegining(5);
    InsertBegining(8);
    insertLast(9);
    intsertPosition(4, 1);
    deleteAtLast();
    insertLast(10);
    display();
    printf("\n");
    display_b();
    // printf("Max = %d\n",max());
    // 8 5 5 7 6
    return 0;
}