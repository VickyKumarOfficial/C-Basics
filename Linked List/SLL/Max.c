int max() {
    if (head == NULL) return -1;
    int ans = 0;
    struct node *temp = head;
    while (temp != NULL) {
        if (temp->data > ans) {
            ans = temp->data;
        }
        temp = temp->next;
    }
    return ans;
}