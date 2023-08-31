/*

link- https://www.codingninjas.com/studio/problems/sort-linked-list-of-0s-1s-2s_1071937?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

Node* sortList(Node *head){
    // Write your code here.
    if(!head || !head->next){
        return  head;
    }
    Node* temp = head;
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    while(temp){
        int value = temp -> data;
        if(value == 0){
            cnt0++;
        }else if (value == 1){
            cnt1++;
        } else if (value == 2){
            cnt2++;
        }
        temp = temp->next;
    }
    temp = head;
    while(temp){
        if(cnt0){
            temp->data = 0;
            cnt0--;
        }else if (cnt1){
            temp->data = 1;
            cnt1--;
        } else if (cnt2){
            temp->data = 2;
            cnt2--;
        }
        temp = temp->next;
    }
    return  head;
}


///////////////////////////////////////////////////////
Node* sortList(Node *head){
    // Write your code here.
    Node* cnt0= new Node(-1);
    Node* cnt1 = new Node(-1);
    Node* cnt2 = new Node(-1);
    Node* cnt0Tail = cnt0;
    Node* cnt1Tail = cnt1;
    Node* cnt2Tail = cnt2;
    Node* temp = head;
    while(temp){
        if(temp->data == 0){
            cnt0Tail -> next = temp;
            cnt0Tail = cnt0Tail -> next;
        }
        else if(temp->data == 1){
            cnt1Tail -> next = temp;
            cnt1Tail = cnt1Tail -> next;
        }
        else if(temp->data == 2){
            cnt2Tail -> next = temp;
            cnt2Tail = cnt2Tail -> next;
        }
        temp = temp->next;
    }
    if(cnt1->next) {
        cnt0Tail -> next = cnt1 -> next;
    } else {
        cnt0Tail->next = cnt2 -> next;
    }
    cnt1Tail->next = cnt2->next;
    cnt2Tail->next = NULL;
    return cnt0->next;
}