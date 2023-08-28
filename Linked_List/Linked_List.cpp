#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

// Displaying linked list
void displayLinkedList(Node *head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << "-->";
    temp = temp->next;
  }
  cout << endl;
}

// creating linked list with inserting one at end
void insertNodeAtEnd(Node *head, int value) {
  Node *temp = head;
  while (temp->next != NULL) {
    temp = temp->next;
  }
  temp->next = new Node(value);
}

// creating linked list with inserting one at start
Node *insertNodeAtStart(Node *head, int value) {
  Node *temp = new Node(value);
  temp->next = head;
  head = temp;
  return head;
}

// creating linked list from array
Node *insertNodeFromArray(int arr[], int size) {
  Node *temp = new Node(arr[0]);
  Node *head = temp;
  for (int i = 1; i < size; i++) {
    Node *curr = new Node(arr[i]);
    temp->next = curr;
    temp = curr;
  }
  return head;
}

// count length of linked list
int sizeOfLinkedList(Node *head) {
  Node *temp = head;
  int cnt = 0;
  while (temp != NULL) {
    cnt++;
    temp = temp->next;
  }
  return cnt;
}

// sum of linked list
int sumOfLinkedList(Node *head) {
  Node *temp = head;
  int sum = 0;
  while (temp != NULL) {
    sum += temp->data;
    temp = temp->next;
  }
  return sum;
}

int main() {
  // Node *head = new Node(199);
  // displayLinkedList(head);
  // head = insertNodeAtStart(head, 555);
  // displayLinkedList(head);
  // insertNodeAtEnd(head, 1000);
  // displayLinkedList(head);
  int arr[] = {54, 22, 35, 5656, 77};
  Node *head = insertNodeFromArray(arr, 5);
  displayLinkedList(head);
  cout << sizeOfLinkedList(head) << endl;
  cout << sumOfLinkedList(head) << endl;
}