#include<stdio.h>
#include<stdlib.h>
#define n 5
int q[n];
int rear = -1, front = -1;
void enque();
int deque();
void display();
void exit();

int main() {
    int x, c, d;
    printf("1. Enqueue\n2. Dequeue\n3. display\n4. Exit\n");
    while (1) {
        printf("Select a choice = ");
        scanf("%d", &c);
        switch (c) {
        case 1: 
            printf("Enter the data to enter in the queue : ");
            scanf("%d", &x);
            enque(d);
            break;
        case 2: 
            printf("data deleted from the queue : %d",deque(x));
            break;
        case 3: 
            display();
            break;
        case 4:
            printf("Task over!");
            exit(1);
            break;
        
        default: printf("Invalid Input!");
            break;
        }
    }
}


void enque(int d) {
    if (rear == n-1) printf("Queue is full!");
    else if(rear == 0) {
        rear = 0;
        front = 0;
        q[rear] = d;
    } else {
        rear += 1;
        q[rear] = d;
    }
}

int deque(int x) {
    if (rear == -1) {
        printf("Queue is already empty!");
        return -1;
    } else if (rear == 0) {
        x = q[front];
        rear = front = -1;
        return -1;
    } else {
        x = q[front];
        front += 1;
        return x;
    }
}

void display() {
    printf("Queue elements are = ");
    for (int i = front; i <= rear; i++) printf("%d  ",q[i]);
}