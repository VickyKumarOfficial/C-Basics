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

/* 
This abbove method is correct to create a linked list but it is not the
effective way and the best way.

The better way and in efficeint way to write the code is written below:
*/

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next
};

struct node *head = NULL, *tail = NULL;

void insert_begining(int n) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode -> data = n;
    if (head == NULL) {     // If list is empty so obviously it will be the first node.
        head = tail = newNode; // when only one node is there then all three will be at one place only.
        tail -> next = NULL; // update tail as the last node by pointing NULL.
    } else {
        
    }
}