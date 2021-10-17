class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode *odd=head;
        ListNode *even=head->next;
        ListNode *evenptr=even;
        while(even!=nullptr && even->next!=nullptr){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=evenptr;
        return head;
    }
};
