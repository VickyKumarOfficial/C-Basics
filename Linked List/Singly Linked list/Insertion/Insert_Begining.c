/*
[VERY UNEFFECEINT WAY TO DO LINKED LIST]
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void display(struct node *ptr) {
    printf("Your given data is :\n");
    while (ptr != NULL) {
        printf("Data = %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertbegin(struct node *head, int data) {
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;

    return ptr;    
}

int main () {
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    fourth->data = 40;
    fourth->next = NULL;

    display (head);     // Displaying Before insertion
    head = insertbegin(head,52);
    printf("\n");
    display (head);     // Displaying After insertion

    return 0;
}