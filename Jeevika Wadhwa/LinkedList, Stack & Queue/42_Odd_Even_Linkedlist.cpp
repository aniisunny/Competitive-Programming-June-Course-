class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)return head;
        ListNode *odd = head, *even = head->next;
        ListNode *evenhead = even;
        
        while(even != NULL && even->next != NULL){
            odd->next = odd->next->next;
            odd = odd->next;
            even->next = odd->next; 
            even = even->next;
        }
        odd->next = evenhead;
        return head;
    }
};
