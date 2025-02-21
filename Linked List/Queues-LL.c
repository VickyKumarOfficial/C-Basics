#include<stdio.h>
#include<stdlib.h>

//  1(f) 2 3 4 5 6(r) nn -> NULL
// (f/r) 4 -> NULL

struct node {
    int data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enqueue(int n) {
    struct node *nn = malloc(sizeof(struct node));
    nn -> data = n;
    if (rear == NULL) {
        front = rear = nn;
    } else {
        nn -> next = NULL;
        rear = nn;
    }
}

void dequeue() {
    if (front == NULL) printf("Queue is empty");
    else if (front == rear) {
        free(front);
        front = NULL;
        rear = NULL;
    }
    else {
        struct node *temp = front;
        front = front -> next;
        printf("Data deleted = %d",temp->data);
        free(temp);
    }
}

void display() {
    if (rear == NULL) printf("Queues is empty laude!");
    else {
        struct node *temp = front;
        while(temp != NULL) {
            printf("%3d",temp->data);
            temp = temp->next;
        }
    }
}
int main(){
    enqueue(10);
    enqueue(1);
    enqueue(4);
    enqueue(6);
    display();
    return 0;
}