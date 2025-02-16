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