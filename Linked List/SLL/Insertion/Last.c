void insertLast(int n) {
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = n;
    if (head == NULL) {
        head = tail = newNode;
        tail->next = NULL;
    } else {
        tail->next = newNode;
        newNode->next = NULL;
        tail = newNode;
    }
}