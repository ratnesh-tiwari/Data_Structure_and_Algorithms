void reverseValueSwap(Node *head) {
  Node *curr = head;
  vector<int> temp;
  while (curr != NULL) {
    temp.push_back(curr->data);
    curr = curr->next;
  }
  curr = head;
  while (curr != NULL) {
    curr -> data = temp.back();
    temp.pop_back();
    curr = curr->next;
  }
}



// reverse linked list pointer modification iterative
Node *reverseIterative(Node *head) {
  Node *curr = head;
  Node *prev = NULL;
  Node *last = NULL;

  while (curr != NULL) {
    last = prev;
    prev = curr;
    curr = curr->next;
    prev->next = last;
  }
  return prev;
}