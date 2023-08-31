/*

link-- https://www.codingninjas.com/studio/problems/add-one-to-a-number-represented-as-linked-list_920557?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

*/

Node* reverse(Node *head){
    Node* curr = head;
    Node* prev = NULL;
    while(curr){
        Node* temp = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

Node* add(Node* head){
    if(!head){
        return NULL;
    }
    Node* temp = head;
    int carry = (temp -> data + 1) / 10;
    temp-> data = (temp -> data + 1) % 10;
    temp = temp -> next;
    Node* follow = NULL;
    while(temp){
        follow = temp;
        int value = temp -> data + carry;
        temp -> data = value % 10;
        carry = value / 10;
        temp = temp -> next;
    }
    if(carry > 0){
        Node* curr = new Node(carry);
        follow -> next = curr;
    }
    return head;
}


Node *addOne(Node *head)
{
    // Write Your Code Here.
    head = reverse(head);
    Node* ans= add(head);
    ans = reverse(ans);
    return ans;
}