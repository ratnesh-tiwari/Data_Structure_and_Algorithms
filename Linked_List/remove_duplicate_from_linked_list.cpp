// removing duplicate from linked list
void removeDuplicate(Node *head) {
  Node *curr = head->next;
  Node *temp = head;
  while (curr != NULL) {
    if (curr->data == temp->data) {
      temp->next = curr->next;
      delete curr;
      curr = temp->next;
    } else {
      temp = curr;
      curr = curr->next;
    }
  }
}