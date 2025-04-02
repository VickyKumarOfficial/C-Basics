// LIFO
/*
    here stack is top to bottom form.
    NULL <- top(When no data is there)
    1 - 0
    2 - 1
    3 - 2
    4 - 3
    5 - 4
    6 - 5 <- top
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node {
    int data;
    struct node *prev;
} *top = NULL;
bool isNull(){ return (top==NULL)? true : false;}
void push(int n) {
    struct node *nn = malloc(sizeof(struct node));
    nn -> data = n;
    nn -> prev = top;
    top = nn;
}
void pop() {
    if (isNull()) return;
    else {
        struct node *temp = top;
        top = top -> prev;
        printf("Deleted data = %d",temp -> data);
        free(temp);
    }
}
void peek() {
    if (isNull()) return;
    else printf("Top Data = %d\n",top->data);
}
void display() {
    if (isNull()) return;
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