#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

void display(struct node *ptr) {
    printf("Your data is :\n");
    while (ptr != NULL) {
        printf("Data = %d\n",ptr->data);
        ptr = ptr->next;
    }
}

struct node *Insert(struct node *head, int data) {
    /*
    As this will be the first inserted node now so after passing the
    value in it it should display at first.
    */
    /*Creating node to insert at begining*/
    struct node *ptr;
    
    /*Memory allocation for created node for insertion*/
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->next = head;   // Pointed ptr as the head (starting node)
    ptr->data = data;   // now poiting ptr on the first node data
    
    return ptr;
}
int main() {
    
    // Declaring the ndoes.
    struct node *head;  
    struct node *second;
    struct node *third;
    
    /* Dynamically memory allocations for the nods.*/
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    
    /* Creating nodes*/
    /*First node*/
    head->data = 4;
    head->next = second;
    
    /*Second node*/
    second->data = 3;
    second->next = third;
    
    /*Thrid node*/
    third->data = 7;
    third->next = NULL;
    
    /*function called to display the data in the nodes*/
    display(head);
    /*fucntion called for insertion*/
    head = Insert(head,5);
    
    /*
    One more time to call as we have given value in the first node and now it will be displayed first.
    */
    printf("\n");   // give a gap for a new output
    display(head);
    
    return 0;
}