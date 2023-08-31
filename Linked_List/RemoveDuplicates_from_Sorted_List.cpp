/*

link- https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

*/

ListNode* deleteDuplicates(ListNode* head) {
        if(!head){
            return head;
        }
        ListNode* temp = head;
        while(temp){
            if( temp->next && (temp->val == temp->next->val) ){
                ListNode* curr = temp->next;
                temp->next = curr->next;
                delete(curr);
            }else{
                temp = temp->next;
            }
        }
        return head;
    }