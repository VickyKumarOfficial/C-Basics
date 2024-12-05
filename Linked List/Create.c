#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

/* Function for displaying the data.*/
void traversal(struct node* ptr) {
    printf("Your given data in the list are :\n");
    while (ptr != NULL) {
        printf("Data = %d\n", ptr->data);
        ptr = ptr->next; 
    }   
}

int main(){

    /* declaration of nodes */
    struct node *head;    
    struct node *second;                    
    struct node *third;

    /* Memory allocation dynamically with *node and malloc function.*/
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    
    /* First node.*/
    head->data = 10;
    head->next = second;

    /* Second node.*/
    second->data = 11;
    second->next = third;
    
    /* No node are there after the third node so next will be pointing at NULL.*/
    third->data = 12;
    third->next = NULL;

    /* calling the function to print the data entred in linked list.*/
    traversal(head);

    return 0;
}