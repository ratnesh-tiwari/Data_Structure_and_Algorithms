/*

link- https://leetcode.com/problems/linked-list-cycle-ii/

*/

node* detectCycle(node* head) {
    unordered_set<node*> st;
    while(head != NULL) {
        if(st.find(head) != st.end()) return head;
        st.insert(head);
        head = head->next;
    }
    return NULL;
}

////////////////////////////////////////////////

node* detectCycle(node* head) {
    if(head == NULL||head->next == NULL) return NULL;
        
    node* fast = head;
    node* slow = head;
    node* entry = head;
        
    while(fast->next != NULL&&fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
            
        if(slow == fast) {
            while(slow != entry) {
                slow = slow->next;
                entry = entry->next;
            }
            return slow;
        }
    }
    return NULL;
}
