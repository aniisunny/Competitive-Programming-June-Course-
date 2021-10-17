class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *head = nullptr, *tail = nullptr;
        while(l1 != nullptr && l2 != nullptr) {
            int sum = l1->val + l2->val + carry;
            ListNode *ptr = new ListNode(sum % 10);
            carry = sum / 10;
            if(head == nullptr) {
                head = tail = ptr;
            }
            else {
                tail->next = ptr;
                tail = ptr;
            }
            l1 = l1->next;
            l2 = l2->next;
        }
        
        while(l1 != nullptr) {
            int sum = l1->val + carry;
            ListNode *ptr = new ListNode(sum % 10);
            carry = sum / 10;
            if(head == nullptr) {
                head = tail = ptr;
            }
            else {
                tail->next = ptr;
                tail = ptr;
            }
            l1 = l1->next;
        }
        
        while(l2 != nullptr) {
            int sum = l2->val + carry;
            ListNode *ptr = new ListNode(sum % 10);
            carry = sum / 10;
            if(head == nullptr) {
                head = tail = ptr;
            }
            else {
                tail->next = ptr;
                tail = ptr;
            }
            l2 = l2->next;
        }
        
        if(carry != 0) {
            ListNode *ptr = new ListNode(carry);
            if(head == nullptr) {
                head = tail = ptr;
            }
            else {
                tail->next = ptr;
                tail = ptr;
            }
        }
        
        return head;     
    }
};
