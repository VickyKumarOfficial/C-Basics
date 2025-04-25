#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head = NULL, *tail = NULL;

void InsertBegining(int n) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=n;
    if (head == NULL)  {
        head = tail = newNode;
        tail->next = NULL;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insertLast(int n) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = n;
    if (head == NULL) {
        head = tail = newNode;
        tail->next = NULL;
    } else {
        tail->next = newNode;
        newNode->next = NULL;
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
        struct node *newNode = (struct node*)malloc(sizeof(struct node));
        newNode->data = n;
        int c = 1;
        struct node *temp = head;
        while (c != position - 1) {
            c++;
            temp = temp->next;
        }
        struct node *hold = temp->next;
        temp->next = newNode;
        newNode->next = hold;
    }
}

void display() {
    if (head == NULL) printf("List is empty!"); 
    else {
        struct node *temp = head;
        while (temp != NULL) {
            printf("Data = %d\n",temp->data);
            temp = temp->next;
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
    // InsertBegining(6);
    // InsertBegining(7);
    // insertLast(9);
    // intsertPosition(3, 5);
    // deleteAtLast();
    // display();
    // printf("Max = %d\n",max());
    int n, num, pos;
    printf("Enter your choice:\n");
    printf("1. Insert at beg\n2. Insert at pos\n3. Insert at last");
    printf("\n4. Delete at beg\n5. Delete at pos\n6. Delete at last");
    switch (n) {
    case 1:
        printf("Enter the data to insert: ");
        scanf("%d", &num);
        InsertBegining(num);
        break;
    case 2:
        printf("Enter the data to insert: ");
        scanf("%d", &num);
        printf("Enter position for the data: ");
        scanf("%d", &pos);
        intsertPosition(pos,num);
    case 3:
        printf("Enter the data to insert: ");
        scanf("%d", &num);
        insertLast(num);
    case 4:
        deleteAtBeginning();
        printf("Data deleted succesfully!");
    case 5:
        printf("Give the position to delete the data: ");
        deleteAtPosition(num);
        printf("Data deleted succesfully!");
    case 6:
        deleteAtLast();
        printf("Data deleted succesfully!");
    default:
    printf("Invalid Input!");
    break;
    }
    return 0;
}