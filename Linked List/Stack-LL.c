// LIFO
//  1 2 3 4 5 6
//  0 1 2 3 4(t)<- 5

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    struct node *prev;
} *top = NULL;

// bool isNull(){ return (top==NULL)? true : false;}

void push(int n) {
    struct node *nn = malloc(sizeof(struct node));
    nn -> data = n;
    nn -> prev = top;
    top = nn;
    printf("Data inserted = %d\n",n);
}

void pop() {
    // if (isNull()) return;
    if (top == NULL) printf("Stack is empty!");
    else {
        struct node *temp = top;
        top = top -> prev;
        free(temp);
    }
}

void peek() {
    // if (isNull()) return;
    if (top == NULL) printf("Stack is empty!");
    printf("Top Data = %d\n",top->data);
}

void display() {
    // if (isNull()) return;
    if (top == NULL) printf("Stack is empty!");
    struct node *temp = top;
    while (temp != NULL) {
        printf("%3d",temp->data);
        temp = temp -> prev;
    }
}

int main(){
    push(5);
    push(3);
    push(1);
    push(7);
    // peek();
    display();
    return 0;
}