/*

link: https://www.codingninjas.com/studio/problems/segregate-even-and-odd-nodes-in-a-linked-list_1116100?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

*/

ListNode* oddEvenList(ListNode* head) {
       if(head==NULL){
            return head;
        }   
        ListNode *odd=head,*even=head->next,*evenHead=even;
        while(even && even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;
    }