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