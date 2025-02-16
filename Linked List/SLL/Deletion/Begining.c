void deleteAtBeginning() {
    if (head == NULL) printf("No List!");
    else {
        struct node *hold = head;
        head = head->next;
        free(hold);
    }
}